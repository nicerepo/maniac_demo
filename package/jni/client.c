#include <android/log.h>
#include <jni.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "xhook.h"

int (*old_rand)();
int new_rand()
{
    __android_log_print(ANDROID_LOG_INFO, "ZANIAC", "[!] new_rand called");

    int retval = 1337;
    __android_log_print(ANDROID_LOG_INFO, "ZANIAC", "[!] old_rand: %d", old_rand());
    __android_log_print(ANDROID_LOG_INFO, "ZANIAC", "[!] new_rand: %d", retval);
    return retval;
}

__attribute__((constructor)) void init(void)
{
    __android_log_print(ANDROID_LOG_INFO, "ZANIAC", "[!] injected");

    xhook_register(".*\\.so$", "rand", (void*)&new_rand, (void**)&old_rand);
    xhook_refresh(1);
}
