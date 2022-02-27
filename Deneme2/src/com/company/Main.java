package com.company;

import java.util.Scanner;

public class Main {


    public static void main(String[] args) {
        Scanner scan= new Scanner(System.in);

        System.out.println("Ilk sayiyi giriniz :");
        int a =scan.nextInt();
        System.out.println("Ikinci sayiyi giriniz :");
        int b= scan.nextInt();
        dortIslem s1=new dortIslem(a,b);
        s1.carpma();



    }
}
