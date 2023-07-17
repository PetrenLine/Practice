# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Practice_num2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Practice_num2_autogen.dir\\ParseCache.txt"
  "Practice_num2_autogen"
  )
endif()
