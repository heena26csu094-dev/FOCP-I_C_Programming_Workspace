#include<stdio.h>
int main(void){

    int price,quantity;
    printf("enter price of one item: ");
    scanf("%d", &price);
    printf("enter no of items: ");
    scanf("%d", &quantity);
    printf("total bill : %d", price*quantity);
    return 0;
}