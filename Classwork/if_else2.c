#include<stdio.h>

int main(void){
    int a,b;
    printf("enter number : ");
    scanf("%d", &a);
    printf("enter number :");
    scanf("%d", &b);
    if(a>b){
        printf("%d\n",a);
    }
    else if (a<b){
        printf("%d\n",b);
    }
    else{
        printf("both nos are equal\n");
    }
    return 0;
}