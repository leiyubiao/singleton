cmake_minimum_required(VERSION 3.7)

add_compile_options(-std=c++11)

include_directories(
	include
)

add_executable(singleton
	src/world.cpp
	src/agent.cpp
	src/main.cpp
)
