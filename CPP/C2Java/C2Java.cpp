#include "pch.h" 		// use stdafx.h in Visual Studio 2017 and earlier
#include <jni.h> 		// JNI header provided by JDK  = C:\Program Files\Java\jdk-x.x.x\include && C:\Program Files\Java\jdk-x.x.x\include\win32
#include <stdio.h>      // C Standard IO Header
#include "C2Java.h"   	// Generated

JNIEXPORT jlong JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_test(JNIEnv*, jobject, jlong a, jlong b) {
	return ((a*b)/2);
}

JNIEXPORT jlong JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_SumAB(JNIEnv*, jobject, jlong a, jlong b) {
	return (a + b);
}

JNIEXPORT jint JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_wichIsMore(JNIEnv*, jobject, jint a, jint b) {
	if (a == b) {
		return a;
	}
	if (a > b) {
		return a;
	}else {
		return b;
	}
}

JNIEXPORT jboolean JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_isTrue(JNIEnv*, jobject) {
	return true;
}

JNIEXPORT jboolean JNICALL Java_br_com_clodoaldo_exemplo_dll_core_C2Java_isFalse(JNIEnv*, jobject) {
	return false;
}

//******************************************************************
// DLL SEM JNI
//******************************************************************
//#include "pch.h" 		// use stdafx.h in Visual Studio 2017 and earlier
//#include "C2Java.h"
//
//long test(long a, long b) {
//	return (a + b);
//}

//unsigned long SumAB(unsigned long a, unsigned long b) {
//	return (a + b);
//}
//
//bool isTrue() {
//	return true;
//}
//
//bool isFalse() {
//	return false;
//}

//******************************************************************
