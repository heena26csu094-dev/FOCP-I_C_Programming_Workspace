#include <stdio.h>

int main() {
    int x,y,z;
    printf("enter first num");
    scanf("%d", &x);
    printf("enter second  num");
    scanf("%d", &y);
    printf("enter third num");
    scanf("%d", &z);
    int max=(x>y)?((x>z) ? x:z ):((y>z) ? y:z );
    printf(" the greatest number is %d\n",max);
    return 0;
}
