cmake_minimum_required(VERSION 3.1)

project(bcrypto)

#Set compiler flags
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-Wwrite-strings")        ## Optimize
    #set(CMAKE_EXE_LINKER_FLAGS "-s")  ## Strip binary
endif()

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_subdirectory(src/)


add_executable(mcrypto main.cpp)
target_link_libraries(mcrypto LINK_PUBLIC bhash)

install(TARGETS mcrypto RUNTIME DESTINATION bin)