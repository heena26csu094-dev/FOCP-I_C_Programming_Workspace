#include<stdio.h>
int main(void){
    int a,b;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter a number: ");
    scanf("%d", &b);
    printf("quotient: %d\n", a/b);
    printf("remainder: %d\n", a%b);
    return 0;


}