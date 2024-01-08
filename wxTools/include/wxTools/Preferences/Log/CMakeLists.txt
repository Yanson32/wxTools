debug_report("Source file = ${CMAKE_CURRENT_LIST_FILE}")

#Add all header files to this variable
set(FILES ""

)

#Add all subdirectories to this variable
set(DIRECTORIES "")

#Add subdirectories
foreach(LOOP_VAR ${DIRECTORIES})
    add_subdirectory("${LOOP_VAR}")
endforeach()

#The path to this directory from the directory containing Main.cpp
set(INSTALL_DIRECTORY "include/wxTools/Preferences/Log")


if(FILES)
	#Add all source files to executable
	target_sources("${PROJECT_NAME}" PRIVATE ${FILES})
    
    #Install source files
	install(FILES ${FILES} DESTINATION "${INSTALL_DIRECTORY}" COMPONENT "libs")
endif()
