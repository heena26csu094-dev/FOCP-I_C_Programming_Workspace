#include<stdio.h>
int main(void){
    float temp;
    printf("enter temperature in celsius: ");
    scanf("%f", &temp);
    printf("temperature in fahrenheit is: %.2f F", (temp*9/5)+32);
    return 0;

}