#pragma once
#include "constraintt.hpp"
#include "iconstraint_workplane.hpp"
#include "document/entity/entity_and_point.hpp"

namespace dune3d {

class Entity;

class ConstraintPointsCoincident : public ConstraintT<ConstraintPointsCoincident>, public IConstraintWorkplane {
public:
    explicit ConstraintPointsCoincident(const UUID &uu);
    explicit ConstraintPointsCoincident(const UUID &uu, const json &j);
    static constexpr Type s_type = Type::POINTS_COINCIDENT;
    json serialize() const override;

    EntityAndPoint m_entity1;
    EntityAndPoint m_entity2;

    UUID m_wrkpl;

    const UUID &get_workplane(const Document &doc) const override
    {
        return m_wrkpl;
    }

    constexpr static auto s_referenced_entities_and_points_tuple =
            std::make_tuple(&ConstraintPointsCoincident::m_entity1, &ConstraintPointsCoincident::m_entity2,
                            &ConstraintPointsCoincident::m_wrkpl);
};

} // namespace dune3d
