cmake_minimum_required(VERSION 3.10)

add_library(jniAccess
        STATIC
        cpp/JNIAccess.cpp
        )

#
#
#
add_library(native-lib

        SHARED

        cpp/native-lib.cpp
        cpp/JNIAccess.cpp
        )

target_link_libraries(native-lib
        PRIVATE
        jniAccess)