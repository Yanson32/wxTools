debug_report("Source file = ${CMAKE_CURRENT_LIST_FILE}")
debug_report("PROJECT_NAME = ${PROJECT_NAME}-Gui")

add_library("${PROJECT_NAME}" "")

target_include_directories("${PROJECT_NAME}" PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
    $<INSTALL_INTERFACE:include>
)

add_subdirectory("include")
add_subdirectory("src")

#Link against the wxWidgets library
find_package(wxWidgets ${AWM_WX_VERSION} REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})
debug_report("wxWidgets_USE_FILE = ${wxWidgets_USE_FILE}")
debug_report("wxWidgets version=${wxWidgets_FIND_VERSION_COMPLETE} Found=${wxWidgets_FOUND}")
debug_report("wxWidgets_VERSION = ${wxWidgets_VERSION}")
debug_report("wxWidgets include directory = ${wxWidgets_INCLUDE_DIRS}")
debug_report("wxWidgets libraries = ${wxWidgets_LIBRARIES}")

target_include_directories("${PROJECT_NAME}" PUBLIC ${wxWidgets_INCLUDE_DIRS})
target_link_libraries("${PROJECT_NAME}" ${wxWidgets_LIBRARIES})

