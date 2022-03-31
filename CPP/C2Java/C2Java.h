#include <jni.h>
#ifndef _Included_br_com_clodoaldo_exemplo_dll_core_C2Java
#define _Included_br_com_clodoaldo_exemplo_dll_core_C2Java
#ifdef __cplusplus
extern "C" {
#endif
	JNIEXPORT jlong JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_test(JNIEnv*, jobject, jlong, jlong);

	JNIEXPORT jlong JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_SumAB	(JNIEnv*, jobject, jlong, jlong);

	JNIEXPORT jint JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_wichIsMore	(JNIEnv*, jobject, jint, jint);

	JNIEXPORT jboolean JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_isTrue	(JNIEnv*, jobject);

	JNIEXPORT jboolean JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_isFalse(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif
#endif

//******************************************************************
// DLL SEM JNI
//******************************************************************
//#pragma once
//#ifdef C2JAVA_EXPORTS
//#define C2JAVA_API __declspec(dllexport)
//#else
//#define C2JAVA_API __declspec(dllimport)
//#endif

//extern "C" C2JAVA_API long test(long a, long b);

//extern "C" C2JAVA_API unsigned long SumAB(unsigned long a, unsigned long b);

//extern "C" C2JAVA_API bool isTrue();

//extern "C" C2JAVA_API bool isFalse();

//******************************************************************
