cmake_minimum_required(VERSION "3.20.0")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules")
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

include("help")

display_help_text()

project("wxTools" VERSION 0.0.0.1 LANGUAGES CXX)
include("debug")
debug_init()
add_subdirectory(wxTools)

#Build preferences
if(WX_TOOLS_EXAMPLES)
    add_subdirectory(examples)
endif()

#Create uninstall target
include("uninstall")
create_uninstall_target()
