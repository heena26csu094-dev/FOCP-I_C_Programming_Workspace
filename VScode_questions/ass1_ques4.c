#include<stdio.h>
int main(void){
    float a,b,c;
    printf("enter first number");
    scanf("%f", &a);
    printf("enter second number");
    scanf("%f", &b);
    printf("enter third number");
    scanf("%f", &c);
    printf("output average: %f",(a+b+c)/3);
    return 0;

}