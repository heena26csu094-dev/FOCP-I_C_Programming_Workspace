#include<stdio.h>

int main(void){
int age,height;
char grade;
    printf("enter your age: \n");
    scanf("%d", &age);
    printf("enter your height(in meters) : \n");
    scanf("%d", &height);
    printf("enter your grade : \n");
    scanf(" %c", &grade);
    printf("-----------\n");
    printf("age: %d\n", age);
    printf("height: %d\n", height);
     printf("grade: %c\n", grade);
     printf("-----------\n");
     return 0;

}