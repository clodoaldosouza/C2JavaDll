package br.com.clodoaldo.exemplo.dll.core;

public class C2Java {
    // JNI simple interface
    public native long test(long first, long second);
    public native long SumAB(long valueA, long valueB);
    public native int wichIsMore(int valueA, int valueB);
    public native boolean isTrue();
    public native boolean isFalse();

    static {
        String myDLL = "C2Java_x32";
        String arch = System.getProperty("os.arch");
        if (arch.contains("64")) {
            myDLL = "C2Java_x64";
        }
        String path = System.getProperty("user.dir") + "/src/main/resources/library/";
        //System.setProperty("java.library.path", path);
        try {
            Runtime.getRuntime().load(path + myDLL + ".dll");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
// javac -h . C2Java.java    <<-- to genetate the .h file.
