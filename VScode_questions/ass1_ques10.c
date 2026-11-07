#include<stdio.h>
int main(void){
   float prdt_price,quan,disc_perc;
   int prdt_id;
   printf("enter the product id: ");
   scanf("%d",&prdt_id);
   printf("enter the product price: ");
   scanf("%f",&prdt_price);
   printf("enter the quantity: ");
   scanf("%f",&quan);
   printf("enter the discount percentage: ");
   scanf("%f",&disc_perc);

   float subtotal,disc_amt,final_amt;
   subtotal=prdt_price*quan;
   disc_amt=subtotal*disc_perc/100;
   final_amt=subtotal-disc_amt;
   printf("_________________________________\n");
   printf("product id: %d\n",prdt_id);
   printf("subtotal: %.1f\n",subtotal);
   printf("discount price: %.1f\n",disc_amt);
   printf("final payable amount: %.1f\n",final_amt);
   printf("_________________________________\n");
   return 0;

}
