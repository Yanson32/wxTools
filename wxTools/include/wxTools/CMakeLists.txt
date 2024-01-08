debug_report("Source file = ${CMAKE_CURRENT_LIST_FILE}")

#Add all header files to this variable
set(FILES "${CMAKE_CURRENT_LIST_DIR}/StatusRAII.h"
"${CMAKE_CURRENT_LIST_DIR}/Convert.h"	

)

#Add all subdirectories to this variable
set(DIRECTORIES "Preferences")

#Add subdirectories
foreach(LOOP_VAR ${DIRECTORIES})
    add_subdirectory("${LOOP_VAR}")
endforeach()

#The path to this directory from the directory containing Main.cpp
set(INSTALL_DIRECTORY "wxTools")


if(FILES)
	#Add all source files to executable
	target_sources("${PROJECT_NAME}" PRIVATE ${FILES})
	
    #Install source files
	install(FILES ${FILES} DESTINATION "${INSTALL_DIRECTORY}" COMPONENT "libs")
endif()
