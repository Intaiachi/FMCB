/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class main_java_side_server_MemoryUtils */

#ifndef _Included_main_java_side_server_MemoryUtils
#define _Included_main_java_side_server_MemoryUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     main_java_side_server_MemoryUtils
 * Method:    createBuffer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_main_java_side_server_MemoryUtils_createBuffer
  (JNIEnv *, jclass);

/*
 * Class:     main_java_side_server_MemoryUtils
 * Method:    closeBuffer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_main_java_side_server_MemoryUtils_closeBuffer
  (JNIEnv *, jclass);

/*
 * Class:     main_java_side_server_MemoryUtils
 * Method:    mapBuffer
 * Signature: ()Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_main_java_side_server_MemoryUtils_mapBuffer
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
