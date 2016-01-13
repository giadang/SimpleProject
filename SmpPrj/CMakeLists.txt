cmake_minimum_required(VERSION 2.8)

project(SimpleProject)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCE ${PROJECT_SOURCE_DIR}/src/SimpleProject.cpp)

set (OPENCV_LINK_LIBS
        opencv_core
        opencv_video
        opencv_imgproc
        opencv_objdetect
        opencv_calib3d
    )
	
add_executable(SimpleProject ${SOURCE})	
	
target_link_libraries(SimpleProject ${OPENCV_LINK_LIBS})	