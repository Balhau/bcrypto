project(bcrypto)

add_executable(mcrypto main.cpp)

add_library(bcrypto SHARED scr/crypto/hash/md5.cpp scr/crypto/hash/hash.cpp)

target_link_libraries(mcrypto LINK_PUBLIC bcrypto)

SET(EXECUTABLE_OUTPUT_PATH bin)
SET(LIBRARY_OUTPUT_PATH bin)

install(TARGETS mcrypto RUNTIME DESTINATION bin)
