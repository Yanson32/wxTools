macro(debug_report MSG)
    message(VERBOSE "${MSG}")
    file(APPEND "${CMAKE_BINARY_DIR}/DebugReport.txt" "${MSG}\n")
endmacro()


macro(debug_init)
    file(REMOVE "${CMAKE_BINARY_DIR}/DebugReport.txt" "${MSG}\n")
    debug_report("PROJECT_NAME = ${PROJECT_NAME}")
    debug_report("CMAKE_PROJECT_VERSION = ${CMAKE_PROJECT_VERSION}")
    debug_report("Source file = ${CMAKE_CURRENT_LIST_FILE}")
endmacro()

#Print a target property
function(debug_print_property PARAM_TARGET PARAM_PROPERTY)
    get_target_property(tmp_PROPERTY "${PARAM_TARGET}" "${PARAM_PROPERTY}")
    foreach(VAR ${tmp_PROPERTY})
        debug_report("TARGET = ${PARAM_TARGET} PROPERTY = ${PARAM_PROPERTY}  DATA = ${VAR}")
    endforeach()
endfunction()


#Display all sources for a target
function(debug_print_sources PARAM_TARGET)
    debug_print_property("${PARAM_TARGET}" "SOURCES")
endfunction()

#Display a targets include directories
function(debug_print_include_directories PARAM_TARGET)
    debug_print_property("${PARAM_TARGET}" "INCLUDE_DIRECTORIES") 
endfunction()

