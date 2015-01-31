project(bcrypto)

#Set compiler flags
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-Wwrite-strings")        ## Optimize
    #set(CMAKE_EXE_LINKER_FLAGS "-s")  ## Strip binary
endif()

ENABLE_LANGUAGE(ASM)
SET(ASM_OPTIONS "-x assembler-with-cpp")
SET(CMAKE_ASM_FLAGS "${CFLAGS} ${ASM_OPTIONS}" )


add_executable(mcrypto main.cpp)

add_library(bcrypto SHARED scr/crypto/hash/md5.cpp scr/crypto/hash/hash.cpp)

#In case of the processor is a intel 64 bits
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  set_source_files_properties(scr/arch/x64/math.c PROPERTIES LANGUAGE C)
  add_library(bmath scr/arch/x64/math.c)
endif()

target_link_libraries(bcrypto LINK_PUBLIC bmath)
target_link_libraries(mcrypto LINK_PUBLIC bcrypto)

SET(EXECUTABLE_OUTPUT_PATH bin)
SET(LIBRARY_OUTPUT_PATH bin)

install(TARGETS mcrypto RUNTIME DESTINATION bin)
