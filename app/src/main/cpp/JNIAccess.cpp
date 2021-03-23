#include "JNIAccess.h"

//void JNIAccess_Obj_SetStringField(JNIEnv *env,
//                                  const std::string &className,
//                                  jobject obj,
//                                  const std::string &fieldName,
//                                  const std::string &str) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID stringID = env->GetFieldID(cls, fieldName.c_str(), "Ljava/lang/String;");
//    jstring newText = env->NewStringUTF(str.c_str());
//    env->SetObjectField(obj, stringID, newText);
//}
//
//void JNIAccess_Obj_SetIntField(JNIEnv *env,
//                               const std::string &className,
//                               jobject obj,
//                               const std::string &fieldName,
//                               const int32_t val) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "I");
//    env->SetIntField(obj, valueID, val);
//}
//
//void JNIAccess_Obj_SetBooleanField(JNIEnv *env,
//                                   const std::string &className,
//                                   jobject obj,
//                                   const std::string &fieldName,
//                                   const bool val) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "Z");
//    env->SetBooleanField(obj, valueID, val);
//}
//
//void JNIAccess_Obj_SetByteField(JNIEnv *env,
//                                const std::string &className,
//                                jobject obj,
//                                const std::string &fieldName,
//                                const int8_t val) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "B");
//    env->SetByteField(obj, valueID, val);
//}
//
//void JNIAccess_Obj_SetCharField(JNIEnv *env,
//                                const std::string &className,
//                                jobject obj,
//                                const std::string &fieldName,
//                                const uint16_t val) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "C");
//    env->SetCharField(obj, valueID, val);
//}
//
//void JNIAccess_Obj_SetLongField(JNIEnv *env,
//                                const std::string &className,
//                                jobject obj,
//                                const std::string &fieldName,
//                                const int64_t val) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "J");
//    env->SetLongField(obj, valueID, val);
//}
//
//void JNIAccess_Obj_SetFloatField(JNIEnv *env,
//                                 const std::string &className,
//                                 jobject obj,
//                                 const std::string &fieldName,
//                                 const float val) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "F");
//    env->SetFloatField(obj, valueID, val);
//}
//
//void JNIAccess_Obj_SetDoubleField(JNIEnv *env,
//                                  const std::string &className,
//                                  jobject obj,
//                                  const std::string &fieldName,
//                                  const double val) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "D");
//    env->SetDoubleField(obj, valueID, val);
//}
//
//std::string JNIAccess_Obj_GetStringField(JNIEnv *env,
//                                         const std::string &className,
//                                         jobject obj,
//                                         const std::string &fieldName) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID stringID = env->GetFieldID(cls, fieldName.c_str(), "Ljava/lang/String;");
//
//    auto strObj = (jstring) env->GetObjectField(obj, stringID);
//    const char *pStr = env->GetStringUTFChars(strObj, nullptr);
//    return std::string(pStr);
//}
//
//int32_t JNIAccess_Obj_GetIntField(JNIEnv *env,
//                                  const std::string &className,
//                                  jobject obj,
//                                  const std::string &fieldName) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "I");
//    return env->GetIntField(obj, valueID);
//}
//
//bool JNIAccess_Obj_GetBooleanField(JNIEnv *env,
//                                   const std::string &className,
//                                   jobject obj,
//                                   const std::string &fieldName) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "Z");
//    return env->GetBooleanField(obj, valueID);
//}
//
//int8_t JNIAccess_Obj_SetByteField(JNIEnv *env,
//                                  const std::string &className,
//                                  jobject obj,
//                                  const std::string &fieldName) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "B");
//    return env->GetByteField(obj, valueID);
//}
//
//uint16_t JNIAccess_Obj_GetCharField(JNIEnv *env,
//                                    const std::string &className,
//                                    jobject obj,
//                                    const std::string &fieldName) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "C");
//    return env->GetCharField(obj, valueID);
//}
//
//int64_t JNIAccess_Obj_GetLongField(JNIEnv *env,
//                                   const std::string &className,
//                                   jobject obj,
//                                   const std::string &fieldName) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "J");
//    return env->GetLongField(obj, valueID);
//}
//
//float_t JNIAccess_Obj_GetFloatField(JNIEnv *env,
//                                    const std::string &className,
//                                    jobject obj,
//                                    const std::string &fieldName) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "F");
//    return env->GetFloatField(obj, valueID);
//}
//
//double JNIAccess_Obj_GetDoubleField(JNIEnv *env,
//                                    const std::string &className,
//                                    jobject obj,
//                                    const std::string &fieldName) {
//    jclass cls = env->FindClass(className.c_str());
//    jfieldID valueID = env->GetFieldID(cls, fieldName.c_str(), "D");
//    return env->GetByteField(obj, valueID);
//}

JNIAccessObj::JNIAccessObj(JNIEnv *env, const std::string &className, jobject obj) : mEnv(env),
                                                                                     mObj(obj) {
    mCls = env->FindClass(className.c_str());
}

void JNIAccessObj::setBooleanField(const std::string &fieldName, const bool val) {
    jfieldID valueID = getFieldId(fieldName, "Z");
    mEnv->SetBooleanField(mObj, valueID, val);
}

bool JNIAccessObj::getBooleanField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "Z");
    return mEnv->GetBooleanField(mObj, valueID);
}

void JNIAccessObj::setByteField(const std::string &fieldName, const int8_t val) {
    jfieldID valueID = getFieldId(fieldName, "B");
    mEnv->SetByteField(mObj, valueID, val);
}

int8_t JNIAccessObj::getByteField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "B");
    return mEnv->GetByteField(mObj, valueID);
}

void JNIAccessObj::setCharField(const std::string &fieldName, const uint16_t val) {
    jfieldID valueID = getFieldId(fieldName, "C");
    mEnv->SetCharField(mObj, valueID, val);
}

uint16_t JNIAccessObj::getCharField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "C");
    return mEnv->GetCharField(mObj, valueID);
}

void JNIAccessObj::setShortField(const std::string &fieldName, const int16_t val) {
    jfieldID valueID = getFieldId(fieldName, "S");
    mEnv->SetShortField(mObj, valueID, val);
}

int16_t JNIAccessObj::getShortField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "S");
    return mEnv->GetShortField(mObj, valueID);
}

void JNIAccessObj::setIntField(const std::string &fieldName, const int32_t val) {
    jfieldID valueID = getFieldId(fieldName, "I");
    mEnv->SetIntField(mObj, valueID, val);
}

int32_t JNIAccessObj::getIntField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "I");
    return mEnv->GetIntField(mObj, valueID);
}

void JNIAccessObj::setLongField(const std::string &fieldName, const int64_t val) {
    jfieldID valueID = getFieldId(fieldName, "J");
    mEnv->SetLongField(mObj, valueID, val);
}

int64_t JNIAccessObj::getLongField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "J");
    return mEnv->GetLongField(mObj, valueID);
}

void JNIAccessObj::setFloatField(const std::string &fieldName, const float val) {
    jfieldID valueID = getFieldId(fieldName, "F");
    mEnv->SetFloatField(mObj, valueID, val);
}

float JNIAccessObj::getFloatField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "F");
    return mEnv->GetFloatField(mObj, valueID);
}

void JNIAccessObj::setDoubleField(const std::string &fieldName, const double val) {
    jfieldID valueID = getFieldId(fieldName, "D");
    mEnv->SetDoubleField(mObj, valueID, val);
}

double JNIAccessObj::getDoubleField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "D");
    return mEnv->GetDoubleField(mObj, valueID);
}

void JNIAccessObj::setStringField(const std::string &fieldName, const std::string &val) {
    jfieldID valueID = getFieldId(fieldName, "Ljava/lang/String;");
    jstring newText = mEnv->NewStringUTF(val.c_str());
    mEnv->SetObjectField(mObj, valueID, newText);
}

std::string JNIAccessObj::getStringField(const std::string &fieldName) {
    jfieldID valueID = getFieldId(fieldName, "Ljava/lang/String;");

    auto strObj = (jstring) mEnv->GetObjectField(mObj, valueID);
    const char *pStr = mEnv->GetStringUTFChars(strObj, nullptr);
    return std::string(pStr);
}

jfieldID JNIAccessObj::getFieldId(const std::string &fieldName, const std::string &sig) {
    auto p = mFieldMap.find(fieldName);
    if (p == mFieldMap.end()) {
        mFieldMap[fieldName] = mEnv->GetFieldID(mCls, fieldName.c_str(), sig.c_str());
    }
    return mFieldMap[fieldName];
}
