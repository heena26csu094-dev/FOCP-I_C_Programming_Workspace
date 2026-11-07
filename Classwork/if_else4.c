#include<stdio.h>
int main(void){
   int a,b;
   char opt;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    printf("enter the operator [+,-,/,*]");
    scanf(" %c", &opt);
    if (opt=='+'){
        printf("%d", a+b);
    }
    else if(opt=='-'){
        printf("%d", a-b);
    }
    else if(opt=='*'){
        printf("%d", a*b);
    }
     else if(opt=='/'){
        printf("%d", a/b);
    }
return 0;
}