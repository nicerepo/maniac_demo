#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_libre_io_maniacdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    return env->NewStringUTF(std::to_string(rand()).c_str());
}
