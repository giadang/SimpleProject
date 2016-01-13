set CMAKE_BIN_DIR="C:/Program Files (x86)/CMake/bin/cmake.exe"
call %CMAKE_BIN_DIR% ../ -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules 
call SP.sln
