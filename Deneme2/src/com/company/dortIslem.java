package com.company;

public class dortIslem {
    int a,b;
    dortIslem(int a,int b){
        this.a=a;
        this.b=b;

    }
    void bolme(){
        System.out.printf("Sayiların bolumu = "+(float)(this.a/this.b));
    }
    void carpma(){
        System.out.printf("Sayilarin carpimi ="+(this.a*this.b));
    }
     void cikarma(){
        System.out.println("Sayilarin farki = "+(this.a-this.b));
    }
     void toplam(){
        System.out.println("Sayilarin toplami = "+(this.a+this.b));
    }
}
