#Add all header files to this variable
set(FILES "${CMAKE_CURRENT_LIST_DIR}/PreferencesPanelBase.cpp"

)

#Add all subdirectories to this variable
set(DIRECTORIES "Log")

#Add subdirectories
foreach(LOOP_VAR ${DIRECTORIES})
    add_subdirectory("${LOOP_VAR}")
endforeach()

#The path to this directory from the directory containing Main.cpp
set(RELATIVE "src/Preferences")


if(FILES)
	#Add all source files to executable
	target_sources("${PROJECT_NAME}" PRIVATE ${FILES})
endif()
