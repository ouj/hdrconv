# setting up cmake
cmake_minimum_required(VERSION 2.8)

# main project name defined
project(hdrconv)

# set default build to release
set(CMAKE_BUILD_TYPE Release)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/${BIN_DIR_SUFFIX})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/${BIN_DIR_SUFFIX})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/${BIN_DIR_SUFFIX})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(/homebrew/include)


SET(SOURCES
    imageio.cpp
    imageio.h
    main.cpp
)


ADD_DEFINITIONS(-DPBRT_PROBES_NONE)
ADD_DEFINITIONS(-DPBRT_POINTER_SIZE=8)

if(WIN32)
    GET_FILENAME_COMPONENT(DEP_DIR "../dep/win64" ABSOLUTE)
    include_directories(${DEP_DIR})
	include_directories(${DEP_DIR}/half)
	include_directories(${DEP_DIR}/Iex)
	include_directories(${DEP_DIR}/IlmImf)
	include_directories(${DEP_DIR}/IlmThread)
	include_directories(${DEP_DIR}/Imath)
	include_directories(${DEP_DIR}/zlib)
	link_directories(${DEP_DIR}/lib)
    ADD_DEFINITIONS(-DPBRT_HAS_OPENEXR)
	SET(EXR_LIB half Iex IlmImf IlmThread Imath zlib)
endif()

ADD_EXECUTABLE(hdrconv ${SOURCES})
TARGET_LINK_LIBRARIES(hdrconv ${EXR_LIB})