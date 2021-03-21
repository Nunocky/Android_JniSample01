package org.nunocky.jnisample01;

class NativeLib {

    public native static int callJNI(Hoge hoge);

    static {
        System.loadLibrary("native-lib");
    }
}
