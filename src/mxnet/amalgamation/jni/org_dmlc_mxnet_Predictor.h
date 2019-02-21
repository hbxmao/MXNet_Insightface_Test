/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_dmlc_mxnet_Predictor */

#ifndef _Included_org_dmlc_mxnet_Predictor
#define _Included_org_dmlc_mxnet_Predictor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_dmlc_mxnet_Predictor
 * Method:    createPredictor
 * Signature: ([B[BII[Ljava/lang/String;[[I)J
 */
JNIEXPORT jlong JNICALL Java_org_dmlc_mxnet_Predictor_createPredictor
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jint, jint, jobjectArray, jobjectArray);

/*
 * Class:     org_dmlc_mxnet_Predictor
 * Method:    nativeFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_dmlc_mxnet_Predictor_nativeFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_dmlc_mxnet_Predictor
 * Method:    nativeGetOutput
 * Signature: (JI)[F
 */
JNIEXPORT jfloatArray JNICALL Java_org_dmlc_mxnet_Predictor_nativeGetOutput
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_dmlc_mxnet_Predictor
 * Method:    nativeForward
 * Signature: (JLjava/lang/String;[F)V
 */
JNIEXPORT void JNICALL Java_org_dmlc_mxnet_Predictor_nativeForward
  (JNIEnv *, jclass, jlong, jstring, jfloatArray);

#ifdef __cplusplus
}
#endif
#endif
