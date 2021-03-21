#include "JNIAccess.h"

void JNIAccess_Obj_SetStringField(JNIEnv *env,
                                  const std::string &className,
                                  jobject obj,
                                  const std::string &fieldName,
                                  const std::string &str) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID stringID = env->GetFieldID(cls, fieldName.c_str(), "Ljava/lang/String;");
    jstring newText = env->NewStringUTF(str.c_str());
    env->SetObjectField(obj, stringID, newText);
}

void JNIAccess_Obj_SetIntField(JNIEnv *env,
                               const std::string &className,
                               jobject obj,
                               const std::string &fieldName,
                               const int32_t val) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "I");
    env->SetIntField(obj, valueID, val);
}

void JNIAccess_Obj_SetBooleanField(JNIEnv *env,
                                   const std::string &className,
                                   jobject obj,
                                   const std::string &fieldName,
                                   const bool val) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "Z");
    env->SetBooleanField(obj, valueID, val);
}

void JNIAccess_Obj_SetByteField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName,
                                const int8_t val) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "B");
    env->SetByteField(obj, valueID, val);
}

void JNIAccess_Obj_SetCharField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName,
                                const uint16_t val) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "C");
    env->SetCharField(obj, valueID, val);
}

void JNIAccess_Obj_SetLongField(JNIEnv *env,
                                const std::string &className,
                                jobject obj,
                                const std::string &fieldName,
                                const int64_t val) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "J");
    env->SetLongField(obj, valueID, val);
}

void JNIAccess_Obj_SetFloatField(JNIEnv *env,
                                 const std::string &className,
                                 jobject obj,
                                 const std::string &fieldName,
                                 const float val) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "F");
    env->SetFloatField(obj, valueID, val);
}

void JNIAccess_Obj_SetDoubleField(JNIEnv *env,
                                  const std::string &className,
                                  jobject obj,
                                  const std::string &fieldName,
                                  const double val) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "D");
    env->SetDoubleField(obj, valueID, val);
}

std::string JNIAccess_Obj_GetStringField(JNIEnv *env,
                                         const std::string &className,
                                         jobject obj,
                                         const std::string &fieldName) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID stringID = env->GetFieldID(cls, fieldName.c_str(), "Ljava/lang/String;");

    auto strObj = (jstring) env->GetObjectField(obj, stringID);
    const char *pStr = env->GetStringUTFChars(strObj, nullptr);
    return std::string(pStr);
}

int32_t JNIAccess_Obj_GetIntField(JNIEnv *env,
                                  const std::string &className,
                                  jobject obj,
                                  const std::string &fieldName) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "I");
    return env->GetIntField(obj, valueID);
}

bool JNIAccess_Obj_GetBooleanField(JNIEnv *env,
                                   const std::string &className,
                                   jobject obj,
                                   const std::string &fieldName) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "Z");
    return env->GetBooleanField(obj, valueID);
}

int8_t JNIAccess_Obj_SetByteField(JNIEnv *env,
                                  const std::string &className,
                                  jobject obj,
                                  const std::string &fieldName) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "B");
    return env->GetByteField(obj, valueID);
}

uint16_t JNIAccess_Obj_GetCharField(JNIEnv *env,
                                    const std::string &className,
                                    jobject obj,
                                    const std::string &fieldName) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "C");
    return env->GetCharField(obj, valueID);
}

int64_t JNIAccess_Obj_GetLongField(JNIEnv *env,
                                   const std::string &className,
                                   jobject obj,
                                   const std::string &fieldName) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "J");
    return env->GetLongField(obj, valueID);
}

float_t JNIAccess_Obj_GetFloatField(JNIEnv *env,
                                    const std::string &className,
                                    jobject obj,
                                    const std::string &fieldName) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "F");
    return env->GetFloatField(obj, valueID);
}

double JNIAccess_Obj_GetDoubleField(JNIEnv *env,
                                    const std::string &className,
                                    jobject obj,
                                    const std::string &fieldName) {
    jclass cls = env->FindClass(className.c_str());
    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "D");
    return env->GetByteField(obj, valueID);
}
