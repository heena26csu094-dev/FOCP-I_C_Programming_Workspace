#include<stdio.h>

int main(void){
    int a,b,c;
    printf("enter number : ");
    scanf("%d", &a);
    printf("enter number :");
    scanf("%d", &b);
    printf("enter number :");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
        printf("%d\n",a);
    }
    else {
        printf("%d\n",c);}
    }
    
    else{
        if(b>c){
            printf("%d\n",b);
        }
        else{
            printf("%d\n",c);
        }
    }
    return 0;
}