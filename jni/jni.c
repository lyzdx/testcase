#include "com_example_jnitest_JNITest.h"
#include <stdio.h>


JNIEXPORT void JNICALL Java_com_example_jnitest_JNITest_JNI
(JNIEnv *env, jobject obj) {

	printf("jniTest_jni ");

}

JNIEXPORT jint JNICALL Java_com_example_jnitest_JNITest_Library(JNIEnv *env,
		jobject jobj, jint a, jint b) {

	int i = a;
	int j = b;
	printf("i=%d,j=%d", i, j);
	return (jint)(i + j);
}

JNIEXPORT void JNICALL Java_com_example_jnitest_JNITest_sayHello
(JNIEnv *env, jobject job, jstring js) {
	   char buf[128];
	　　const char *str = (*env)->GetStringUTFChars(env, js, 0);
	　　printf("%s", str);
	　　(*env)->ReleaseStringUTFChars(env, js, str);

}

