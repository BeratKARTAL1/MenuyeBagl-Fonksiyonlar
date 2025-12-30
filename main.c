#include <stdio.h>
void MENU();
int enK(int a,int b);
int enB(int a,int b);
int dorduncuKuvvet(int a);
int mutlak(int a);
int main() {
    int secim;
    int a=0,b=0;
    MENU();
    printf("lutfen 1-4 arasinda bir sayi seciniz:");
    scanf("%d",&secim);
    switch (secim) {
        case 1:
            printf("iki sayi gir:\n");
            scanf("%d %d",&a,&b);
            printf("kucuk deger:%d",enK(a,b));
            break;
        case 2:printf("iki sayi gir:\n");
            scanf("%d %d",&a,&b);
            printf("buyuk deger:%d",enB(a,b));
            break;
        case 3:
            printf("sayi gir:\n");
            scanf("%d",&a);
            printf("sonuc:%d",dorduncuKuvvet(a)); break;
        case 4:
            printf("sayi gir:\n");
            scanf("%d",&a);
            printf("mutlak deger:%d",mutlak(a)); break;
        default:
            printf("ERROR!");
    }
    return 0;
}

void MENU() {
    ////MENU İÇERİĞİ///
    printf("1-en kucuk degeri bulma\n");
    printf("2-en buyuk degeri bulma\n");
    printf("3-dorduncu kuvvet bulma\n");
    printf("4-mutlak deger bulma\n");
}
int enK(int a,int b) {
    if (b>a) {
        return a;
    }
    else
        return b;
}
int enB(int a,int b) {
    if (b>a) {
        return b;
    }
    else
        return a;
}
int dorduncuKuvvet (int a) {
    return a*a*a*a;
}
int mutlak(int a) {
    if (a<0) {
        return a*(-1);
    }else return a;
}