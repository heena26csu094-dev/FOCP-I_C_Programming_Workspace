#include<stdio.h>
int main(void){
    int a,b,c,d,e;
    printf("enter marks obtained in english: ");
    scanf("%d", &a);
    printf("enter marks obtained in maths: ");
    scanf("%d", &b);
    printf("enter marks obtained in hindi: ");
    scanf("%d", &c);
    printf("enter marks obtained in sst: ");
    scanf("%d", &d);
    printf("enter marks obtained in science: ");
    scanf("%d", &e);  
    printf("total marks obtained: %d/n", a+b+c+d+e);
    printf("percentage: %d/n",(a+b+c+d+e)/500*100);
    return 0;
}