#pragma once

namespace dune3d {
enum class ToolID {
    NONE,
    DRAW_LINE_3D,
    DRAW_ARC_2D,
    DRAW_CIRCLE_2D,
    DRAW_WORKPLANE,
    DRAW_CONTOUR,
    DRAW_CONTOUR_FROM_POINT,
    DELETE,
    MOVE,
    CONSTRAIN_COINCIDENT,
    CONSTRAIN_HORIZONTAL,
    CONSTRAIN_VERTICAL,
    CONSTRAIN_DISTANCE,
    CONSTRAIN_DISTANCE_HORIZONTAL,
    CONSTRAIN_DISTANCE_VERTICAL,
    CONSTRAIN_SAME_ORIENTATION,
    CONSTRAIN_WORKPLANE_NORMAL,
    CONSTRAIN_PARALLEL,
    CONSTRAIN_MIDPOINT,
    CONSTRAIN_EQUAL_LENGTH,
    CONSTRAIN_EQUAL_RADIUS,
    CONSTRAIN_RADIUS,
    CONSTRAIN_DIAMETER,
    CONSTRAIN_PERPENDICULAR,
    CONSTRAIN_ANGLE,
    ENTER_DATUM,
    ADD_ANCHOR,
    TOGGLE_CONSTRUCTION,
    SET_CONSTRUCTION,
    UNSET_CONSTRUCTION,
    IMPORT_STEP,
    SELECT_EDGES,
    SET_WORKPLANE,
    UNSET_WORKPLANE,
    DRAW_POINT_2D,
    ROTATE,
};
}
