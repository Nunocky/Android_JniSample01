#include <jni.h>
#include <string>
#include <cstring>


#define HOGE_CLASS_NAME "org/nunocky/jnisample01/Hoge"
#define POINT_CLASS_NAME "org/nunocky/jnisample01/Point"

static void Hoge_setText(JNIEnv *env, jobject hoge, const std::string &str) {
    jclass cls = env->FindClass(HOGE_CLASS_NAME);
    jfieldID textID = env->GetFieldID(cls, "text", "Ljava/lang/String;");

    jstring newText = env->NewStringUTF(str.c_str());

    env->SetObjectField(hoge, textID, newText);
}

static void Hoge_setNumber(JNIEnv *env, jobject hoge, int16_t num) {
    jclass cls = env->FindClass(HOGE_CLASS_NAME);
    jfieldID numberID = env->GetFieldID(cls, "number", "I");

    env->SetIntField(hoge, numberID, num);
}

static void Hoge_addPoint(JNIEnv *env, jobject hoge, int16_t x, int16_t y) {
    jclass cls = env->FindClass(HOGE_CLASS_NAME);

    // 新しい Pointオブジェクトを作る
    // javap -s Point
    jclass pointCls = env->FindClass(POINT_CLASS_NAME);
    jmethodID constructor = env->GetMethodID(pointCls, "<init>", "(II)V");
    jobject newPoint = env->NewObject(pointCls, constructor, x, y);

    // newPointオブジェクトを pointArrayに追加する
    jclass vectorCls = env->FindClass("java/util/Vector");
    jfieldID vectorFieldID = env->GetFieldID(cls, "points", "Ljava/util/Vector;");
    jmethodID addMethod = env->GetMethodID(vectorCls, "addElement", "(Ljava/lang/Object;)V");

    jobject vectorObj = env->GetObjectField(hoge, vectorFieldID);
    env->CallVoidMethod(vectorObj, addMethod, newPoint);
}

extern "C" jint
Java_org_nunocky_jnisample01_NativeLib_callJNI(JNIEnv *env, jclass clazz, jobject hoge) {

    // hoge.text = "Hello World"
    Hoge_setText(env, hoge, "Hello World");

    // hoge.number = 12345
    Hoge_setNumber(env, hoge, 12345);

    // hoge.points.add (1,2)
    // hoge.points.add (3,4)
    // hoge.points.add (5,6)
    Hoge_addPoint(env, hoge, 1, 2);
    Hoge_addPoint(env, hoge, 3, 4);
    Hoge_addPoint(env, hoge, 5, 6);

    return 0;
}