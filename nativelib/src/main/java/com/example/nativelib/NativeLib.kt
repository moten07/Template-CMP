package com.example.nativelib

object NativeLib {

    /**
     * A native method that is implemented by the 'nativelib' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String

    // Used to load the 'nativelib' library on application startup.
    init {
        System.loadLibrary("nativelib")
    }
}
