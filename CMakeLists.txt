project(bcrypto)

#Set compiler flags
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-Wwrite-strings")        ## Optimize
    #set(CMAKE_EXE_LINKER_FLAGS "-s")  ## Strip binary
endif()

add_executable(mcrypto main.cpp)

add_library(bcrypto SHARED scr/crypto/hash/md5.cpp scr/crypto/hash/hash.cpp)

target_link_libraries(mcrypto LINK_PUBLIC bcrypto)

SET(EXECUTABLE_OUTPUT_PATH bin)
SET(LIBRARY_OUTPUT_PATH bin)

install(TARGETS mcrypto RUNTIME DESTINATION bin)
