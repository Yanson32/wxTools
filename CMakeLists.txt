cmake_minimum_required(VERSION "3.20.0")

#Set module path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules")

#Include debug module
include("debug")

debug_report("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

set(WXT_EXAMPLES False CACHE BOOL "Build examples when this variable is set to True")
set(WXT_HELP True CACHE BOOL "Set to True to display help text")

include("help")
display_help_text()

project("wxTools" VERSION 0.0.0.1 LANGUAGES CXX)

include ("GNUInstallDirs")
debug_init()
add_subdirectory(wxTools)


#Build preferences
if(WXT_EXAMPLES)
    add_subdirectory(examples)
endif()

#Create uninstall target
include("uninstall")
create_uninstall_target()
