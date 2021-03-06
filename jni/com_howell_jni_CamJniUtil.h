/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_howell_jni_CamJniUtil */

#ifndef _Included_com_howell_jni_CamJniUtil
#define _Included_com_howell_jni_CamJniUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_cameraInit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraDeinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_cameraDeinit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraLogin
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraLogin
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraLogout
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraLogout
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraPlay
 * Signature: (IIIILcom/howell/ecamerajing/bean/NetRectFileItem;)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraPlay
  (JNIEnv *, jclass, jint, jint, jint, jint, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraLoaclPlay
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraLoaclPlay
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraGetPos
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraGetPos
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraSetPos
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraSetPos
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraGetTotalMSec
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraGetTotalMSec
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraGetTotalFrame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraGetTotalFrame
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraGetPlayedMsc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraGetPlayedMsc
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraGetCurFrame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraGetCurFrame
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraSetFrame
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraSetFrame
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraPause
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraPause
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    cameraStop
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_cameraStop
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVInit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVDeinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVDeinit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVSetCallbackObject
 * Signature: (Ljava/lang/Object;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVSetCallbackObject
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVSetCallbackMethodName
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVSetCallbackMethodName
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVLock
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVLock
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVUnlock
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVUnlock
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVSetEnable
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVSetEnable
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVRenderY
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVRenderY
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVRenderU
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVRenderU
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    YUVRenderV
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_YUVRenderV
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    AudioInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_AudioInit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    AudioDeinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_AudioDeinit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    AudioSetCallbackObject
 * Signature: (Ljava/lang/Object;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_AudioSetCallbackObject
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    AudioSetCallbackFieldName
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_AudioSetCallbackFieldName
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    AudioSetCallbackMethodName
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_AudioSetCallbackMethodName
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    AudioStop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_AudioStop
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    getFileList
 * Signature: (IILcom/howell/ecamerajing/bean/SystimeInfo;Lcom/howell/ecamerajing/bean/SystimeInfo;)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_getFileList
  (JNIEnv *, jclass, jint, jint, jobject, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    getFileListCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_getFileListCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    getListByPage
 * Signature: (IIILcom/howell/ecamerajing/bean/Record;IILcom/howell/ecamerajing/bean/Pagination;)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_getListByPage
  (JNIEnv *, jclass, jint, jint, jint, jobject, jint, jint, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    closeFileList
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_closeFileList
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    getReplayList
 * Signature: (II)[Lcom/howell/ecamerajing/bean/NetRectFileItem;
 */
JNIEXPORT jobjectArray JNICALL Java_com_howell_jni_CamJniUtil_getReplayList
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    nativeGetNetRfidInfo
 * Signature: ()Lcom/howell/ecamerajing/bean/NetRfidInfo;
 */
JNIEXPORT jobject JNICALL Java_com_howell_jni_CamJniUtil_nativeGetNetRfidInfo
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    nativeSetNetRfidInfo
 * Signature: (Lcom/howell/ecamerajing/bean/NetRfidInfo;)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_nativeSetNetRfidInfo
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    jpgInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_jpgInit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    jpgDeinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_jpgDeinit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    jpgSetCallbackObject
 * Signature: (Ljava/lang/Object;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_jpgSetCallbackObject
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    jpgSetCallbackFieldName
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_jpgSetCallbackFieldName
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    jpgSetCallbackMethodName
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_jpgSetCallbackMethodName
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    getPlayBackJPG
 * Signature: (ILcom/howell/ecamerajing/bean/NetRectFileItem;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_howell_jni_CamJniUtil_getPlayBackJPG
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    jpgSetNeedFirstJpg
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_jpgSetNeedFirstJpg
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    seekbarChange
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_seekbarChange
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    startRecord
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_startRecord
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    stopRecord
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_stopRecord
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    setCamSystemTime
 * Signature: (Lcom/howell/ecamerajing/bean/SystimeInfo;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_howell_jni_CamJniUtil_setCamSystemTime
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    getCamSystemTime
 * Signature: ()Lcom/howell/ecamerajing/bean/SystimeInfo;
 */
JNIEXPORT jobject JNICALL Java_com_howell_jni_CamJniUtil_getCamSystemTime
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    getCamRecordState
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_howell_jni_CamJniUtil_getCamRecordState
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    setWifiInfo
 * Signature: (Lcom/howell/ecamerajing/bean/NetWlanApInfo;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_howell_jni_CamJniUtil_setWifiInfo
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    getWifiInfo
 * Signature: (Lcom/howell/ecamerajing/bean/NetWlanApInfo;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_howell_jni_CamJniUtil_getWifiInfo
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_downloadInit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadDeinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_downloadDeinit
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadSetCallbackObject
 * Signature: (Ljava/lang/Object;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_downloadSetCallbackObject
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadSetCallbackFieldName
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_downloadSetCallbackFieldName
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadSetCallbackMethodName
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_downloadSetCallbackMethodName
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadStart
 * Signature: (Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_howell_jni_CamJniUtil_downloadStart
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadStop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_howell_jni_CamJniUtil_downloadStop
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadGetPos
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_howell_jni_CamJniUtil_downloadGetPos
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadGetTotalLen
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_howell_jni_CamJniUtil_downloadGetTotalLen
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadGetCutTimeStamp
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_howell_jni_CamJniUtil_downloadGetCutTimeStamp
  (JNIEnv *, jclass);

/*
 * Class:     com_howell_jni_CamJniUtil
 * Method:    downloadGetFrameLen
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_howell_jni_CamJniUtil_downloadGetFrameLen
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
