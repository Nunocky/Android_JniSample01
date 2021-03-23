//
// Created by 布川祐人 on 3/21/21.
//

#ifndef JNISAMPLE01_JNIACCESS_H
#define JNISAMPLE01_JNIACCESS_H

#include <jni.h>
#include <string>
#include <cstring>
#include <map>

//void JNIAccess_Obj_SetStringField(JNIEnv *env,
//                                  const std::string &className,
//                                  jobject obj,
//                                  const std::string &fieldName,
//                                  const std::string &str);
//
//void JNIAccess_Obj_SetIntField(JNIEnv *env,
//                               const std::string &className,
//                               jobject obj,
//                               const std::string &fieldName,
//                               const int32_t val);
//
//void JNIAccess_Obj_SetBooleanField(JNIEnv *env,
//                                   const std::string &className,
//                                   jobject obj,
//                                   const std::string &fieldName,
//                                   const bool val);
//
//void JNIAccess_Obj_SetByteField(JNIEnv *env,
//                                const std::string &className,
//                                jobject obj,
//                                const std::string &fieldName,
//                                const int8_t val);
//
//void JNIAccess_Obj_SetCharField(JNIEnv *env,
//                                const std::string &className,
//                                jobject obj,
//                                const std::string &fieldName,
//                                const uint16_t val);
//
//void JNIAccess_Obj_SetLongField(JNIEnv *env,
//                                const std::string &className,
//                                jobject obj,
//                                const std::string &fieldName,
//                                const int64_t val);
//
//void JNIAccess_Obj_SetFloatField(JNIEnv *env,
//                                 const std::string &className,
//                                 jobject obj,
//                                 const std::string &fieldName,
//                                 const float val);
//
//void JNIAccess_Obj_SetDoubleField(JNIEnv *env,
//                                  const std::string &className,
//                                  jobject obj,
//                                  const std::string &fieldName,
//                                  const double val);
//
//
////SetBooleanField()
////SetByteField()
////SetCharField()
////SetShortField()
////SetIntField()
////SetLongField()
////SetFloatField()
////SetDoubleField()
//
////SetObjectField()
//
//
//std::string JNIAccess_Obj_GetStringField(JNIEnv *env,
//                                         const std::string &className,
//                                         jobject obj,
//                                         const std::string &fieldName);
//
//int32_t JNIAccess_Obj_SetIntField(JNIEnv *env,
//                                  const std::string &className,
//                                  jobject obj,
//                                  const std::string &fieldName);
//
//bool JNIAccess_Obj_SetBooleanField(JNIEnv *env,
//                                   const std::string &className,
//                                   jobject obj,
//                                   const std::string &fieldName);
//
//int8_t JNIAccess_Obj_SetByteField(JNIEnv *env,
//                                  const std::string &className,
//                                  jobject obj,
//                                  const std::string &fieldName);
//
//uint16_t JNIAccess_Obj_SetCharField(JNIEnv *env,
//                                    const std::string &className,
//                                    jobject obj,
//                                    const std::string &fieldName);
//
//int64_t JNIAccess_Obj_SetLongField(JNIEnv *env,
//                                   const std::string &className,
//                                   jobject obj,
//                                   const std::string &fieldName);
//
//float_t JNIAccess_Obj_SetFloatField(JNIEnv *env,
//                                    const std::string &className,
//                                    jobject obj,
//                                    const std::string &fieldName);
//
//double JNIAccess_Obj_SetDoubleField(JNIEnv *env,
//                                    const std::string &className,
//                                    jobject obj,
//                                    const std::string &fieldName);


class JNIAccessObj {
public:
    JNIAccessObj(JNIEnv *env, const std::string &className, jobject obj);

    //SetBooleanField()
//SetByteField()
//SetCharField()
//SetShortField()
//SetIntField()
//SetLongField()
//SetFloatField()
//SetDoubleField()

    void setBooleanField(const std::string &fieldName, const bool val);

    bool getBooleanField(const std::string &fieldName);

    void setByteField(const std::string &fieldName, const int8_t val);

    int8_t getByteField(const std::string &fieldName);

    void setCharField(const std::string &fieldName, const uint16_t val);

    uint16_t getCharField(const std::string &fieldName);

    void setShortField(const std::string &fieldName, const int16_t val);

    int16_t getShortField(const std::string &fieldName);

    void setIntField(const std::string &fieldName, const int32_t val);

    int32_t getIntField(const std::string &fieldName);

    void setLongField(const std::string &fieldName, const int64_t val);

    int64_t getLongField(const std::string &fieldName);

    void setFloatField(const std::string &fieldName, const float val);

    float getFloatField(const std::string &fieldName);

    void setDoubleField(const std::string &fieldName, const double val);

    double getDoubleField(const std::string &fieldName);

    void setStringField(const std::string &fieldName, const std::string &val);

    std::string getStringField(const std::string &fieldName);

protected:
    jfieldID getFieldId(const std::string &fieldName, const std::string &sig);

private:
    JNIAccessObj() {}

    std::map<std::string, jfieldID> mFieldMap;
    JNIEnv *mEnv;
    jclass mCls;
    jobject mObj;
};

#endif //JNISAMPLE01_JNIACCESS_H
