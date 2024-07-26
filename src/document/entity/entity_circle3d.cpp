#include "entity_circle3d.hpp"
#include "nlohmann/json.hpp"
#include "util/glm_util.hpp"
#include "util/json_util.hpp"
#include "document/document.hpp"
#include "entity_workplane.hpp"
#include "entityt_impl.hpp"

namespace dune3d {
EntityCircle3D::EntityCircle3D(const UUID &uu) : Base(uu)
{
}

EntityCircle3D::EntityCircle3D(const UUID &uu, const json &j)
    : Base(uu, j), m_center(j.at("center").get<glm::dvec3>()), m_radius(j.at("radius").get<double>()),
      m_normal(j.at("normal").get<glm::dquat>())
{
}

json EntityCircle3D::serialize() const
{
    json j = Entity::serialize();
    j["center"] = m_center;
    j["radius"] = m_radius;
    j["normal"] = m_normal;
    return j;
}

double EntityCircle3D::get_param(unsigned int point, unsigned int axis) const
{
    if (point == 0)
        return m_radius;
    else if (point == 1)
        return m_center[axis];
    else if (point == 2)
        return m_normal[axis];

    return NAN;
}

void EntityCircle3D::set_param(unsigned int point, unsigned int axis, double value)
{
    if (point == 0)
        m_radius = value;
    else if (point == 1)
        m_center[axis] = value;
    else if (point == 2)
        m_normal[axis] = value;
}

std::string EntityCircle3D::get_point_name(unsigned int point) const
{
    switch (point) {
    case 1:
        return "center";
    default:
        return "";
    }
}

glm::dvec3 EntityCircle3D::get_point(unsigned int point, const Document &doc) const
{
    if (point == 1)
        return m_center;
    return {NAN, NAN, NAN};
}

bool EntityCircle3D::is_valid_point(unsigned int point) const
{
    return point == 1;
}

} // namespace dune3d
