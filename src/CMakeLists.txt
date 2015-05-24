cmake_minimum_required (VERSION 2.6)
project (SFML-Game)

include_directories(../include)

set(EXECUTABLE_NAME "SFMLGame")
add_executable(${EXECUTABLE_NAME} Main.cpp)

# this works for Debian (Jessie) when libsfml-dev is installed
set(CMAKE_MODULE_PATH "/usr/share/SFML/cmake/Modules/" ${CMAKE_MODULE_PATH})

find_package(SFML 2 REQUIRED system window graphics)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()
