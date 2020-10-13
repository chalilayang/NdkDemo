#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_miui_ndkapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from Cddd++";
    return env->NewStringUTF(hello.c_str());
}
