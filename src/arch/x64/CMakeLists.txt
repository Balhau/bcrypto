#In case of the processor is a intel 64 bits
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  set_source_files_properties(math.c PROPERTIES LANGUAGE C)
  add_library(bmath math.c)
endif()