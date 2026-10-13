#include<stdio.h>

int main(void){// write a code to print numbers 1 to 10 and skip 6
    for(int i=1; i<=10; i++){
    if (i==6){
        continue;
    }

   printf("%d\n",i);}
return 0;
}