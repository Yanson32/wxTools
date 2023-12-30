#Add all header files to this variable
set(FILES "")

#Add all subdirectories to this variable
set(DIRECTORIES "")

#Add subdirectories
foreach(LOOP_VAR ${DIRECTORIES})
    add_subdirectory("${LOOP_VAR}")
endforeach()

#The path to this directory from the directory containing Main.cpp
set(RELATIVE "src/Preferences/Log")


if(FILES)
	#Add all source files to executable
	target_sources("${PROJECT_NAME}" PRIVATE ${FILES})
endif()
