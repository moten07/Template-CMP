#include <jni.h>
#include <string>

#include <opencv2/opencv.hpp>

extern "C" JNIEXPORT jstring JNICALL

Java_com_example_nativelib_NativeLib_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = std::string("Hello from C++") + CV_VERSION;
    return env->NewStringUTF(hello.c_str());
}