# include<stdio.h>
float c;
float tofahrenheit(float c){
    return c*1.8f+32;
}
int main(void){
    
    printf("enter temperature in celsius: ");
    scanf("%f", &c);
    c=tofahrenheit(c);
    printf(" temp in fahrenhiet is :%f",c);
    return 0;

}