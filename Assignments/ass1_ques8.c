#include<stdio.h>
int main(void){
    float s,a,b;
    printf("enter your basic salary: ");
    scanf("%f", &s);
    printf("enter your allowance: ");
    scanf("%f", &a);
    printf("enter your bonus: ");
    scanf("%f", &b);

    printf("your final salary is: %.2f", s+a+b);
    return 0;
}