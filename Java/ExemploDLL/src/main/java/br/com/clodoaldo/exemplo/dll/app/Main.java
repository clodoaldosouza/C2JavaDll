package br.com.clodoaldo.exemplo.dll.app;

import br.com.clodoaldo.exemplo.dll.core.C2Java;

public class Main {
    public static void main(String[] args) {
        C2Java c2Java = new C2Java();

        boolean isTrue = c2Java.isTrue();
        System.out.println("isTrue = " + isTrue);

        boolean isFalse = c2Java.isFalse();
        System.out.println("isFalse = " + isFalse);

        long a = c2Java.test(5L, 4L);
        System.out.println("test(5,4) = " + a);

        int b = c2Java.wichIsMore(4 ,3);
        System.out.println("4>3? = " + b);

        long c = c2Java.SumAB(30 ,50);
        System.out.println("Sum(30+50) = " + c);

        long d = c2Java.test(13 ,10);
        System.out.println("test(13,10) = " + d);
    }
}
