//
// Created by 布川祐人 on 3/21/21.
//

#ifndef JNISAMPLE01_JNIACCESS_H
#define JNISAMPLE01_JNIACCESS_H

#include <jni.h>
#include <string>
#include <cstring>

void JNIAccess_Obj_SetStringField(JNIEnv *env,
                                  const std::string &className,
                                  jobject obj,
                                  const std::string &fieldName,
                                  const std::string &str);

void JNIAccess_Obj_SetIntField(JNIEnv *env,
                               const std::string &className,
                               jobject obj,
                               const std::string &fieldName,
                               const int32_t val);

void JNIAccess_Obj_SetBooleanField(JNIEnv *env,
                               const std::string &className,
                               jobject obj,
                               const std::string &fieldName,
                               const bool val);

void JNIAccess_Obj_SetByteField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName,
                                const int8_t val);

void JNIAccess_Obj_SetCharField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName,
                                const uint16_t val);

void JNIAccess_Obj_SetLongField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName,
                                const int64_t val);

void JNIAccess_Obj_SetFloatField(JNIEnv *env,
                                 const std::string &className,
                                 jobject obj,
                                 const std::string &fieldName,
                                 const float val);

void JNIAccess_Obj_SetDoubleField(JNIEnv *env,
                                 const std::string &className,
                                 jobject obj,
                                 const std::string &fieldName,
                                 const double val);


//SetBooleanField()
//SetByteField()
//SetCharField()
//SetShortField()
//SetIntField()
//SetLongField()
//SetFloatField()
//SetDoubleField()

//SetObjectField()


std::string JNIAccess_Obj_GetStringField(JNIEnv *env,
                                  const std::string &className,
                                  jobject obj,
                                  const std::string &fieldName);

int32_t JNIAccess_Obj_SetIntField(JNIEnv *env,
                               const std::string &className,
                               jobject obj,
                               const std::string &fieldName);

bool JNIAccess_Obj_SetBooleanField(JNIEnv *env,
                                   const std::string &className,
                                   jobject obj,
                                   const std::string &fieldName);

int8_t JNIAccess_Obj_SetByteField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName);

uint16_t JNIAccess_Obj_SetCharField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName);

int64_t JNIAccess_Obj_SetLongField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName);

float_t JNIAccess_Obj_SetFloatField(JNIEnv *env,
                                 const std::string &className,
                                 jobject obj,
                                 const std::string &fieldName);

double JNIAccess_Obj_SetDoubleField(JNIEnv *env,
                                  const std::string &className,
                                  jobject obj,
                                  const std::string &fieldName);

#endif //JNISAMPLE01_JNIACCESS_H
