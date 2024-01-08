#!/bin/bash
cmake -S . -B ./build/gcc/debug -DCMAKE_BUILD_TYPE:STRING="Debug" -DCMAKE_CXX_FLAGS_DEBUG:STRING="-g -Wall -Wextra" -DAWM_WX_VERSION="3.2.4" -DWXT_EXAMPLES="True"
cmake -S . -B ./build/gcc/release -DCMAKE_BUILD_TYPE:STIRNG="Release" 

