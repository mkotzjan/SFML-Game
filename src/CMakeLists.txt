include_directories(${SFML-Game_SOURCE_DIR}/include)

set(EXECUTABLE_NAME "SFMLGame")
# put the executable in the binary dir and not in a src subfolder
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
add_executable(${EXECUTABLE_NAME} Main.cpp Game.cpp Object.cpp Star.cpp
  Planet.cpp)

# this works for Debian (Jessie) when libsfml-dev is installed
set(CMAKE_MODULE_PATH "/usr/share/SFML/cmake/Modules/" ${CMAKE_MODULE_PATH})

find_package(SFML 2 REQUIRED system window graphics)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()
