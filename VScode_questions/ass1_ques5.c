#include<stdio.h>
int main(void){
    int a,b;
    printf("enter a number : ");
    scanf("%d", &a);
    printf("enter another number : ");
    scanf("%d", &b);
    printf(" numbers before swapping: %d %d\n", a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("numbers after swapping: %d %d\n",a,b);
    return 0;

}