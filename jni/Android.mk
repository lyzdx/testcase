LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := serial
LOCAL_SRC_FILES := jni.c
LOCAL_LDLIBS    := -llog
LOCAL_CFLAGS    := -fexceptions

include $(BUILD_SHARED_LIBRARY)
