#pragma once
#include "action.hpp"

namespace dune3d {
enum class ActionID {
    SAVE,
    SAVE_AS,
    SAVE_ALL,
    UNDO,
    REDO,
    POPOVER,
    CLOSE_DOCUMENT,
    OPEN_DOCUMENT,
    NEW_DOCUMENT,
    EXPORT_SOLID_MODEL_STL,
    EXPORT_SOLID_MODEL_STEP,
    EXPORT_PROJECTION,
    PREVIOUS_GROUP,
    NEXT_GROUP,
    PREFERENCES,
    TOGGLE_SOLID_MODEL,
    VIEW_ALL,
    VIEW_PERSP,
    VIEW_ORTHO,
    VIEW_TOGGLE_PERSP_ORTHO,
    VIEW_RESET_TILT,
    DELETE_CURRENT_GROUP,
    MOVE_GROUP_UP,
    MOVE_GROUP_DOWN,
    MOVE_GROUP_TO_END_OF_BODY,
    MOVE_GROUP_TO_END_OF_DOCUMENT,
    CREATE_GROUP_SKETCH,
    CREATE_GROUP_EXTRUDE,
    CREATE_GROUP_LATHE,
    CREATE_GROUP_REVOLVE,
    CREATE_GROUP_CHAMFER,
    CREATE_GROUP_FILLET,
    CREATE_GROUP_LINEAR_ARRAY,
    TOGGLE_WORKPLANE,
    ALIGN_VIEW_TO_WORKPLANE,
    ALIGN_VIEW_TO_CURRENT_WORKPLANE,
    CENTER_VIEW_TO_WORKPLANE,
    CENTER_VIEW_TO_CURRENT_WORKPLANE,
    ALIGN_AND_CENTER_VIEW_TO_WORKPLANE,
    SELECT_PATH,
    EXPORT_PATHS,
    EXPORT_PATHS_IN_CURRENT_GROUP,
    CLIPPING_PLANE_WINDOW,
    TOGGLE_CLIPPING_PLANES,
    SELECT_UNDERCONSTRAINED,
    SELECT_ALL_ENTITIES_IN_CURRENT_GROUP,
    SELECTION_FILTER,
    SET_CURRENT_DOCUMENT,
    EXPLODE_CLUSTER,
    UNEXPLODE_CLUSTER,
    TOGGLE_PREVIOUS_CONSTRUCTION_ENTITIES,
    COPY,
};
}
