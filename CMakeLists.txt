cmake_minimum_required(VERSION 3.10)
project(hitineEngine)

set(CMAKE_CXX_STANDARD 23)

# Find required packages
find_package(SDL2 REQUIRED)
# find_package(OpenGL REQUIRED)
# find_package(GLEW REQUIRED)  # Add GLEW here
# find_package(assimp REQUIRED)

# Include directories
# include_directories(${SDL2_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIR} external/glm ${GLEW_INCLUDE_DIRS} ${ASSIMP_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/include)
include_directories(${SDL2_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/include)


# Add executable
add_executable(hitineEngine src/main.cpp)

# Link libraries
target_link_libraries(hitineEngine PRIVATE SDL2::SDL2)
