#include "action_catalog.hpp"
#include "core/tool_id.hpp"
#include "action_id.hpp"

namespace dune3d {
const std::map<ActionToolID, ActionCatalogItem> action_catalog = {
        {ActionID::SAVE_ALL, {"Save all", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::SAVE, {"Save", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::SAVE_AS, {"Save as", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::EXPORT_SOLID_MODEL_STL, {"Export STL", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::EXPORT_SOLID_MODEL_STEP, {"Export STEP", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DRAW_CONTOUR, {"Draw contour", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DRAW_CONTOUR_FROM_POINT,
         {"Draw contour", ActionGroup::DRAW,
          ActionCatalogItem::FLAGS_NO_MENU | ActionCatalogItem::FLAGS_NO_POPOVER
                  | ActionCatalogItem::FLAGS_NO_PREFERENCES}},
        {ToolID::DRAW_LINE_3D, {"Draw line in 3D", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DRAW_LINE_2D, {"Draw line in workplane", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DRAW_ARC_2D, {"Draw arc in workplane", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DRAW_POINT_2D, {"Draw point in workplane", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DRAW_CIRCLE_2D, {"Draw circle in workplane", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DRAW_WORKPLANE, {"Draw workplane", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::MOVE, {"Move", ActionGroup::MOVE, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::ROTATE, {"Rotate", ActionGroup::MOVE, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DELETE, {"Delete", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::POPOVER, {"Popover", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_NO_POPOVER}},
        {ToolID::SET_WORKPLANE, {"Set active workplane", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::UNSET_WORKPLANE, {"Unset active workplane", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_COINCIDENT,
         {"Constrain coincident", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_HORIZONTAL,
         {"Constrain horizontal", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_VERTICAL, {"Constrain vertical", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_HORIZONTAL_AUTO,
         {"Constrain horizontal (auto)", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_VERTICAL_AUTO,
         {"Constrain vertical (auto)", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_DISTANCE, {"Constrain distance", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_DISTANCE_HORIZONTAL,
         {"Constrain horizontal distance", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_DISTANCE_VERTICAL,
         {"Constrain vertical distance", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_SAME_ORIENTATION,
         {"Constrain same orientation", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_PARALLEL, {"Constrain parallel", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_WORKPLANE_NORMAL,
         {"Constrain workplane normal", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_MIDPOINT, {"Constrain midpoint", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_EQUAL_LENGTH,
         {"Constrain equal length", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_EQUAL_RADIUS,
         {"Constrain equal radius", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_DIAMETER, {"Constrain diameter", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_RADIUS, {"Constrain radius", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_PERPENDICULAR,
         {"Constrain perpendicular", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_ANGLE, {"Constrain angle", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_POINT_IN_PLANE,
         {"Constrain point in plane", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::TOGGLE_CONSTRUCTION, {"Toggle construction", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::SET_CONSTRUCTION, {"Set construction", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::UNSET_CONSTRUCTION, {"Unset construction", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::ENTER_DATUM, {"Enter datum", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::ADD_ANCHOR, {"Add anchor", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::MOVE_ANCHOR, {"Move anchor", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::ENTER_DATUM, {"Enter datum", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::IMPORT_STEP, {"Import STEP", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::UNDO, {"Undo", ActionGroup::UNDO, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::REDO, {"Redo", ActionGroup::UNDO, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::CLOSE_DOCUMENT, {"Close document", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::OPEN_DOCUMENT, {"Open document", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::NEW_DOCUMENT, {"New document", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::SELECT_EDGES, {"Select edges", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::PREVIOUS_GROUP, {"Previous group", ActionGroup::VIEW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::NEXT_GROUP, {"Next group", ActionGroup::VIEW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::PREFERENCES, {"Preferences", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::TOGGLE_SOLID_MODEL, {"Toggle solid model", ActionGroup::VIEW, ActionCatalogItem::FLAGS_IN_TOOL}},
        {ActionID::VIEW_ALL, {"Reset view", ActionGroup::VIEW, ActionCatalogItem::FLAGS_IN_TOOL}},
        {ActionID::VIEW_PERSP, {"View perspective", ActionGroup::VIEW, ActionCatalogItem::FLAGS_IN_TOOL}},
        {ActionID::VIEW_ORTHO, {"View orthographic", ActionGroup::VIEW, ActionCatalogItem::FLAGS_IN_TOOL}},
        {ActionID::VIEW_TOGGLE_PERSP_ORTHO,
         {"Toggle persp/ortho", ActionGroup::VIEW, ActionCatalogItem::FLAGS_IN_TOOL}},
        {ActionID::DELETE_CURRENT_GROUP,
         {"Delete current group", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::CREATE_GROUP_SKETCH, {"Create sketch group", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::CREATE_GROUP_EXTRUDE,
         {"Create extrude group", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::CREATE_GROUP_LATHE, {"Create lathe group", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::CREATE_GROUP_FILLET, {"Create fillet group", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::CREATE_GROUP_LINEAR_ARRAY,
         {"Create linear array group", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::CREATE_GROUP_CHAMFER,
         {"Create chamfer group", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::MOVE_GROUP_UP, {"Move current group up", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::MOVE_GROUP_DOWN, {"Move current group down", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::MOVE_GROUP_TO_END_OF_BODY,
         {"Move current group to end of body/next body", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::MOVE_GROUP_TO_END_OF_DOCUMENT,
         {"Move current group to end of document", ActionGroup::GROUP, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::TOGGLE_WORKPLANE, {"Toggle workplane", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::ALIGN_VIEW_TO_WORKPLANE,
         {"Align view to workplane", ActionGroup::VIEW, ActionCatalogItem::FLAGS_SPECIFIC}},
        {ActionID::ALIGN_VIEW_TO_CURRENT_WORKPLANE,
         {"Align view to current workplane", ActionGroup::VIEW,
          ActionCatalogItem::FLAGS_IN_TOOL | ActionCatalogItem::FLAGS_IN_TOOL}},
        {ActionID::CENTER_VIEW_TO_WORKPLANE,
         {"Center view to workplane", ActionGroup::VIEW, ActionCatalogItem::FLAGS_SPECIFIC}},
        {ActionID::CENTER_VIEW_TO_CURRENT_WORKPLANE,
         {"Center view to current workplane", ActionGroup::VIEW,
          ActionCatalogItem::FLAGS_IN_TOOL | ActionCatalogItem::FLAGS_IN_TOOL}},
        {ActionID::ALIGN_AND_CENTER_VIEW_TO_WORKPLANE,
         {"Align&center view to workplane", ActionGroup::VIEW, ActionCatalogItem::FLAGS_SPECIFIC}},
        {ActionID::VIEW_RESET_TILT, {"Reset tilt", ActionGroup::VIEW, ActionCatalogItem::FLAGS_IN_TOOL}},
        {ActionID::SELECT_PATH, {"Select path", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_SPECIFIC}},
        {ToolID::DRAW_REGULAR_POLYGON, {"Draw regular polygon", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::DRAW_RECTANGLE, {"Draw rectangle", ActionGroup::DRAW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::EXPORT_PATHS, {"Export paths", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::EXPORT_PATHS_IN_CURRENT_GROUP,
         {"Export paths in current group", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::EXPORT_PROJECTION, {"Export projection", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::CLIPPING_PLANE_WINDOW, {"Clipping planes", ActionGroup::VIEW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::TOGGLE_CLIPPING_PLANES,
         {"Toggle clipping planes", ActionGroup::VIEW, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_LOCK_ROTATION, {"Lock rotation", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::FLIP_ARC, {"Flip arc", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::SELECT_UNDERCONSTRAINED,
         {"Select underconstrained", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::SELECT_ALL_ENTITIES_IN_CURRENT_GROUP,
         {"Select all entities in current group", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::SELECTION_FILTER, {"Selection filter", ActionGroup::UNKNOWN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_POINT_IN_WORKPLANE,
         {"Constrain point in workplane", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_SYMMETRIC_HORIZONTAL,
         {"Constrain symmetric horizontally", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_SYMMETRIC_VERTICAL,
         {"Constrain symmetric vertically", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ToolID::CONSTRAIN_SYMMETRIC_LINE,
         {"Constrain symmetric about line", ActionGroup::CONSTRAIN, ActionCatalogItem::FLAGS_DEFAULT}},
        {ActionID::SET_CURRENT_DOCUMENT, {"Make active", ActionGroup::DOCUMENT, ActionCatalogItem::FLAGS_SPECIFIC}},
};


const std::vector<std::pair<ActionGroup, std::string>> action_group_catalog = {
        {ActionGroup::CONSTRAIN, "Constrain"}, {ActionGroup::DRAW, "Draw"},    {ActionGroup::MOVE, "Move"},
        {ActionGroup::UNDO, "Undo"},           {ActionGroup::GROUP, "Group"},  {ActionGroup::DOCUMENT, "Document"},
        {ActionGroup::VIEW, "View"},           {ActionGroup::UNKNOWN, "Misc"},
};

#define ACTION_LUT_ITEM(x)                                                                                             \
    {                                                                                                                  \
        #x, ActionID::x                                                                                                \
    }

const LutEnumStr<ActionID> action_lut = {
        ACTION_LUT_ITEM(SAVE_ALL),
        ACTION_LUT_ITEM(SAVE),
        ACTION_LUT_ITEM(SAVE_AS),
        ACTION_LUT_ITEM(EXPORT_SOLID_MODEL_STL),
        ACTION_LUT_ITEM(EXPORT_SOLID_MODEL_STEP),
        ACTION_LUT_ITEM(EXPORT_PROJECTION),
        ACTION_LUT_ITEM(UNDO),
        ACTION_LUT_ITEM(REDO),
        ACTION_LUT_ITEM(POPOVER),
        ACTION_LUT_ITEM(CLOSE_DOCUMENT),
        ACTION_LUT_ITEM(OPEN_DOCUMENT),
        ACTION_LUT_ITEM(NEW_DOCUMENT),
        ACTION_LUT_ITEM(PREVIOUS_GROUP),
        ACTION_LUT_ITEM(NEXT_GROUP),
        ACTION_LUT_ITEM(PREFERENCES),
        ACTION_LUT_ITEM(TOGGLE_SOLID_MODEL),
        ACTION_LUT_ITEM(VIEW_ALL),
        ACTION_LUT_ITEM(VIEW_PERSP),
        ACTION_LUT_ITEM(VIEW_ORTHO),
        ACTION_LUT_ITEM(VIEW_TOGGLE_PERSP_ORTHO),
        ACTION_LUT_ITEM(DELETE_CURRENT_GROUP),
        ACTION_LUT_ITEM(MOVE_GROUP_UP),
        ACTION_LUT_ITEM(MOVE_GROUP_DOWN),
        ACTION_LUT_ITEM(MOVE_GROUP_TO_END_OF_BODY),
        ACTION_LUT_ITEM(MOVE_GROUP_TO_END_OF_DOCUMENT),
        ACTION_LUT_ITEM(CREATE_GROUP_SKETCH),
        ACTION_LUT_ITEM(CREATE_GROUP_EXTRUDE),
        ACTION_LUT_ITEM(CREATE_GROUP_LATHE),
        ACTION_LUT_ITEM(CREATE_GROUP_CHAMFER),
        ACTION_LUT_ITEM(CREATE_GROUP_FILLET),
        ACTION_LUT_ITEM(CREATE_GROUP_LINEAR_ARRAY),
        ACTION_LUT_ITEM(TOGGLE_WORKPLANE),
        ACTION_LUT_ITEM(ALIGN_VIEW_TO_WORKPLANE),
        ACTION_LUT_ITEM(ALIGN_VIEW_TO_CURRENT_WORKPLANE),
        ACTION_LUT_ITEM(CENTER_VIEW_TO_WORKPLANE),
        ACTION_LUT_ITEM(CENTER_VIEW_TO_CURRENT_WORKPLANE),
        ACTION_LUT_ITEM(ALIGN_AND_CENTER_VIEW_TO_WORKPLANE),
        ACTION_LUT_ITEM(VIEW_RESET_TILT),
        ACTION_LUT_ITEM(SELECT_PATH),
        ACTION_LUT_ITEM(EXPORT_PATHS),
        ACTION_LUT_ITEM(EXPORT_PATHS_IN_CURRENT_GROUP),
        ACTION_LUT_ITEM(CLIPPING_PLANE_WINDOW),
        ACTION_LUT_ITEM(TOGGLE_CLIPPING_PLANES),
        ACTION_LUT_ITEM(SELECT_UNDERCONSTRAINED),
        ACTION_LUT_ITEM(SELECT_ALL_ENTITIES_IN_CURRENT_GROUP),
        ACTION_LUT_ITEM(SELECTION_FILTER),
        ACTION_LUT_ITEM(SET_CURRENT_DOCUMENT),
};

#define TOOL_LUT_ITEM(x)                                                                                               \
    {                                                                                                                  \
        #x, ToolID::x                                                                                                  \
    }

const LutEnumStr<ToolID> tool_lut = {
        TOOL_LUT_ITEM(NONE),
        TOOL_LUT_ITEM(MOVE),
        TOOL_LUT_ITEM(DELETE),
        TOOL_LUT_ITEM(DRAW_ARC_2D),
        TOOL_LUT_ITEM(DRAW_LINE_2D),
        TOOL_LUT_ITEM(DRAW_POINT_2D),
        TOOL_LUT_ITEM(DRAW_CIRCLE_2D),
        TOOL_LUT_ITEM(DRAW_LINE_3D),
        TOOL_LUT_ITEM(DRAW_WORKPLANE),
        TOOL_LUT_ITEM(DRAW_CONTOUR),
        TOOL_LUT_ITEM(DRAW_CONTOUR_FROM_POINT),
        TOOL_LUT_ITEM(CONSTRAIN_COINCIDENT),
        TOOL_LUT_ITEM(CONSTRAIN_HORIZONTAL),
        TOOL_LUT_ITEM(CONSTRAIN_HORIZONTAL_AUTO),
        TOOL_LUT_ITEM(CONSTRAIN_VERTICAL),
        TOOL_LUT_ITEM(CONSTRAIN_VERTICAL_AUTO),
        TOOL_LUT_ITEM(CONSTRAIN_DISTANCE),
        TOOL_LUT_ITEM(CONSTRAIN_DISTANCE_VERTICAL),
        TOOL_LUT_ITEM(CONSTRAIN_DISTANCE_HORIZONTAL),
        TOOL_LUT_ITEM(CONSTRAIN_SAME_ORIENTATION),
        TOOL_LUT_ITEM(CONSTRAIN_PARALLEL),
        TOOL_LUT_ITEM(CONSTRAIN_WORKPLANE_NORMAL),
        TOOL_LUT_ITEM(CONSTRAIN_MIDPOINT),
        TOOL_LUT_ITEM(CONSTRAIN_EQUAL_LENGTH),
        TOOL_LUT_ITEM(CONSTRAIN_EQUAL_RADIUS),
        TOOL_LUT_ITEM(CONSTRAIN_RADIUS),
        TOOL_LUT_ITEM(CONSTRAIN_DIAMETER),
        TOOL_LUT_ITEM(CONSTRAIN_PERPENDICULAR),
        TOOL_LUT_ITEM(CONSTRAIN_ANGLE),
        TOOL_LUT_ITEM(CONSTRAIN_POINT_IN_PLANE),
        TOOL_LUT_ITEM(CONSTRAIN_LOCK_ROTATION),
        TOOL_LUT_ITEM(CONSTRAIN_POINT_IN_WORKPLANE),
        TOOL_LUT_ITEM(ENTER_DATUM),
        TOOL_LUT_ITEM(ADD_ANCHOR),
        TOOL_LUT_ITEM(MOVE_ANCHOR),
        TOOL_LUT_ITEM(TOGGLE_CONSTRUCTION),
        TOOL_LUT_ITEM(SET_CONSTRUCTION),
        TOOL_LUT_ITEM(UNSET_CONSTRUCTION),
        TOOL_LUT_ITEM(IMPORT_STEP),
        TOOL_LUT_ITEM(SELECT_EDGES),
        TOOL_LUT_ITEM(SET_WORKPLANE),
        TOOL_LUT_ITEM(UNSET_WORKPLANE),
        TOOL_LUT_ITEM(ROTATE),
        TOOL_LUT_ITEM(DRAW_REGULAR_POLYGON),
        TOOL_LUT_ITEM(DRAW_RECTANGLE),
        TOOL_LUT_ITEM(FLIP_ARC),
        TOOL_LUT_ITEM(CONSTRAIN_SYMMETRIC_HORIZONTAL),
        TOOL_LUT_ITEM(CONSTRAIN_SYMMETRIC_VERTICAL),
        TOOL_LUT_ITEM(CONSTRAIN_SYMMETRIC_LINE),
};


} // namespace dune3d
