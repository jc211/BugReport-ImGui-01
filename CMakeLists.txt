cmake_minimum_required(VERSION 3.00)
project(main)

find_package(GLEW CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
include(imgui/CMakeLists.txt)

add_executable(main main.cpp window.cpp ${IMGUI_SRC})
target_include_directories(main PRIVATE imgui)
target_link_libraries(main PRIVATE GLEW::GLEW glfw)
set_property(TARGET main PROPERTY CXX_STANDARD 17)
