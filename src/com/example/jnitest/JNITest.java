package com.example.jnitest;

public class JNITest {

	public native void JNI();

	public native int Library(int a, int b);

	public native void sayHello(String str);

	static {
		System.loadLibrary("serial");
	}
}
