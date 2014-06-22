cmake_minimum_required(VERSION 2.6)

project(AnimeFace)

FILE(GLOB SRCS "src/*.c")
FILE(GLOB HEADERS "src/*.h")

OPTION(ENABLE_OPENMP	"Enables OpenMP Support" 0)

IF(ENABLE_OPENMP)
	IF(MSVC)
		ADD_DEFINITIONS(/DNV_ENABLE_OPENMP /openmp)
	ELSE()
		ADD_DEFINITIONS(-DNV_ENABLE_OPENMP -fopenmp)
	ENDIF()
ENDIF()

add_library(animeface ${SRCS})

install(FILES ${HEADERS} DESTINATION include)
install(TARGETS animeface
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)

