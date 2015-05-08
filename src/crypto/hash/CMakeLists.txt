file(GLOB HASH_INCLUDES "*.h")
file(GLOB HASH_SOURCES "*.cpp")

add_library(bhash SHARED ${HASH_SOURCES})
target_link_libraries(bhash LINK_PUBLIC bmath)
