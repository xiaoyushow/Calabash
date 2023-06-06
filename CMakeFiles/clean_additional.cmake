# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\calabash_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\calabash_autogen.dir\\ParseCache.txt"
  "calabash_autogen"
  )
endif()
