file(GLOB UTILITIES_INCLUDES "*.h")
file(GLOB UTILITIES_SOURCES "*.cpp")

add_library(butil SHARED ${UTILITIES_SOURCES})