debug_report("Source file = ${CMAKE_CURRENT_LIST_FILE}")

set(FILES "${CMAKE_CURRENT_SOURCE_DIR}/ConvertExample.cpp")

add_executable("ConvertExample" "ConvertExample.cpp")
target_link_libraries("ConvertExample" wxt::wxTools)

#Link against the wxWidgets library
find_package(wxWidgets ${WXT_WX_VERSION} REQUIRED COMPONENTS core base)

#include use file if being used
if(wxWidgets_USE_FILE)
    include(${wxWidgets_USE_FILE})
endif()

target_include_directories("ConvertExample" PUBLIC ${wxWidgets_INCLUDE_DIRS})
target_link_libraries("ConvertExample" ${wxWidgets_LIBRARIES})
debug_report("wxWidgets libraries = ${wxWidgets_LIBRARIES}")


debug_print_property("ConvertExample" "SOURCES")
debug_print_property("ConvertExample" "INTERFACE_LINK_LIBRARIES")

