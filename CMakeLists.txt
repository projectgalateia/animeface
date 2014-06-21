cmake_minimum_required(VERSION 2.6)

project(AnimeFace)

FILE(GLOB SRCS "src/*.c")
FILE(GLOB HEADERS "src/*.h")

add_library(animeface ${SRCS})

install(FILES ${HEADERS} DESTINATION include)
install(TARGETS animeface
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)

