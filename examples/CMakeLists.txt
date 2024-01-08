debug_report("Source file = ${CMAKE_CURRENT_LIST_FILE}")

set(DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/ConvertExample/")

foreach(VAR ${DIRECTORIES})
   add_subdirectory("${VAR}") 
endforeach()

