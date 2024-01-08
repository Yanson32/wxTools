debug_report("Source file = ${CMAKE_CURRENT_LIST_FILE}")
debug_report("PROJECT_NAME = ${PROJECT_NAME}")

set(WXT_CONFIG_BUILD_DIR "${wxTools_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}")
set(WXT_CONFIG_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}")

#create a postfix for static libraries
if(NOT BUILD_SHARED_LIBS)
	set(STATIC_NAME_POSTFIX "-s")
endif()

#Build shared library by default
option(BUILD_SHARED_LIBS "True when building shared libraries" True)

#Create library target
add_library("${PROJECT_NAME}" "")
add_library("wxt::${PROJECT_NAME}" ALIAS "${PROJECT_NAME}")

#set targets output name
set_target_properties("${PROJECT_NAME}" PROPERTIES
                    DEBUG_POSTFIX "${STATIC_NAME_POSTFIX}-d"
                    RELWITHDEBINFO_POSTFIX "${STATIC_NAME_POSTFIX}-d"
                    RELEASE_POSTFIX "${STATIC_NAME_POSTFIX}"
                    MINSIZEREL_POSTFIX "${STATIC_NAME_POSTFIX}"

)

#Set the targets include directories
target_include_directories("${PROJECT_NAME}" PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
    $<INSTALL_INTERFACE:include>
)


#Create export file
include(GenerateExportHeader)
generate_export_header("${PROJECT_NAME}")

#Install export file
string(TOLOWER "${PROJECT_NAME}" LOWERCASE_NAME)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${LOWERCASE_NAME}_export.h" DESTINATION "include" COMPONENT "libs")

#Set c++ version to 20
target_compile_features("${PROJECT_NAME}" PUBLIC cxx_std_20)

add_subdirectory("include")
add_subdirectory("src")

set(WXT_WX_VERSION "" CACHE STRING "Set the version of wxWidgets to link against")

#Link against the wxWidgets library
find_package(wxWidgets ${WXT_WX_VERSION} REQUIRED COMPONENTS core base)

include(${wxWidgets_USE_FILE})

debug_report("wxWidgets_USE_FILE = ${wxWidgets_USE_FILE}")
debug_report("wxWidgets version=${wxWidgets_FIND_VERSION_COMPLETE} Found=${wxWidgets_FOUND}")
debug_report("wxWidgets_VERSION = ${wxWidgets_VERSION}")
debug_report("wxWidgets include directory = ${wxWidgets_INCLUDE_DIRS}")
debug_report("wxWidgets libraries = ${wxWidgets_LIBRARIES}")

target_include_directories("${PROJECT_NAME}" PUBLIC ${wxWidgets_INCLUDE_DIRS})
target_link_libraries("${PROJECT_NAME}" ${wxWidgets_LIBRARIES})


#create export file name for shared library 
set(EXPORT_FILE_NAME "${PROJECT_NAME}Shared-Exports")

#Create export file name for static library
if(NOT BUILD_SHARED_LIBS)
    set(EXPORT_FILE_NAME "${PROJECT_NAME}Static-Exports")
endif() 

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT "${EXPORT_FILE_NAME}" INCLUDES DESTINATION "include")

#Export to the install tree
install(EXPORT "${EXPORT_FILE_NAME}" DESTINATION "${WXT_CONFIG_INSTALL_DIR}"  NAMESPACE "WXT::" COMPONENT "libs")

#Export targets to the build tree
export(EXPORT "${EXPORT_FILE_NAME}" FILE "${WXT_CONFIG_BUILD_DIR}/${EXPORT_FILE_NAME}.cmake" NAMESPACE "WXT::")

unset(EXPORT_FILE_NAME)
