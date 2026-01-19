#include <stdio.h>
void MENU();
int min(int a,int b);
int max(int a,int b);
int dorduncuKuvvet(int a);
int fab(int a);
int main() {
    int secim;
    int a=0,b=0;
    MENU();
    printf("Please choose a number between 1 and 4:");
    scanf("%d",&secim);
    switch (secim) {
        case 1:
            printf("enter two numbers:\n");
            scanf("%d %d",&a,&b);
            printf("min:%d",min(a,b));
            break;
        case 2:printf("enter two numbers:\n");
            scanf("%d %d",&a,&b);
            printf("max:%d",max(a,b));
            break;
        case 3:
            printf("enter number:\n");
            scanf("%d",&a);
            printf("conclusion:%d",dorduncuKuvvet(a)); break;
        case 4:
            printf("enter:\n");
            scanf("%d",&a);
            printf("fab:%d",fab(a)); break;
        default:
            printf("ERROR!");
    }
    return 0;
}

void MENU() {
    ////MENU İÇERİĞİ///
    printf("1-min\n");
    printf("2-max\n");
    printf("3-multiply four times\n");
    printf("4-fab\n");
}
int min(int a,int b) {
    if (b>a) {
        return a;
    }
    else
        return b;
}
int max(int a,int b) {
    if (b>a) {
        return b;
    }
    else
        return a;
}
int dorduncuKuvvet (int a) {
    return a*a*a*a;
}
int fab(int a) {
    if (a<0) {
        return a*(-1);
    }else return a;
}
