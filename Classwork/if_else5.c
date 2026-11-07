#include <stdio.h>

int main() {
    int dayno;
    char isHoliday;
    printf("enter week day:");
    scanf("%d", &dayno);
    printf("Is holiday(y/n):");
    scanf("%c", &isHoliday);

    if((dayno ==2 || dayno==3) && (isHoliday!='y' || isHoliday!='Y')){
        printf("FOCP class scheduled\n");
    }
    else{
        printf("No FOCP class scheduled\n");
    }
    return 0;
}