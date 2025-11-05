# Add project specific ProGuard rules here.
# By default, the flags in this file are appended to flags specified
# in [sdk]/tools/proguard/proguard-android.txt
# You can edit the include path and order by changing the proguardFiles
# directive in build.gradle.
#
# For more details, see
#   http://developer.android.com/guide/developing/tools/proguard.html

# Keep SDL classes - they're called from native code
-keep class org.libsdl.app.** { *; }
-keepclassmembers class org.libsdl.app.** { *; }

# Keep MainActivity and AssetCopyUtil
-keep class com.dishii.zelda3.MainActivity { *; }
-keep class com.dishii.zelda3.AssetCopyUtil { *; }

# Keep native methods
-keepclasseswithmembernames class * {
    native <methods>;
}

# Keep classes with native methods and their members
-keepclasseswithmembers class * {
    native <methods>;
}

# Preserve the line number information for debugging stack traces
-keepattributes SourceFile,LineNumberTable

# Hide the original source file name for better security
-renamesourcefileattribute SourceFile
