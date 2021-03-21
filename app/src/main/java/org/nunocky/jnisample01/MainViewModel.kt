package org.nunocky.jnisample01

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel

class MainViewModel : ViewModel() {
    private val _text1 = MutableLiveData("")
    val text1: LiveData<String> = _text1

    private val _text2 = MutableLiveData("")
    val text2: LiveData<String> = _text2

    private val _text3 = MutableLiveData("")
    val text3: LiveData<String> = _text3

    fun callJNI() {
        val hoge = Hoge()

        NativeLib.callJNI(hoge)

        _text1.value = hoge.text
        _text2.value = "${hoge.number}"

        val t3 = hoge.points.map { point ->
            "(${point.x}, ${point.y})"
        }

        _text3.value = t3.joinToString(", ")


    }
}
