/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_liulishuo_jni_SpeexEncoder */

#ifndef _Included_com_liulishuo_jni_SpeexEncoder
#define _Included_com_liulishuo_jni_SpeexEncoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_liulishuo_jni_SpeexEncoder
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT jlong JNICALL Java_com_liulishuo_jni_SpeexEncoder_init
  (JNIEnv *, jobject, jint);

JNIEXPORT jint JNICALL Java_com_liulishuo_jni_SpeexEncoder_getFrameSize
        (JNIEnv *, jobject, jlong);

/*
 * Class:     com_liulishuo_jni_SpeexEncoder
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_liulishuo_jni_SpeexEncoder_release
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_liulishuo_jni_SpeexEncoder
 * Method:    encode
 * Signature: (I[S)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_liulishuo_jni_SpeexEncoder_encode
  (JNIEnv *, jobject, jlong, jint, jint, jshortArray);

#ifdef __cplusplus
}
#endif
#endif
