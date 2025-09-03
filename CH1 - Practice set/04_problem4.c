#include <stdio.h>

int main(){
    float p;
    scanf("%f", &p);
    int r, t;
    scanf("%d", &r);
    scanf("%d", &t);
    printf("The value of simple intrest is %f", (p*r*t)/100);
    return 0;
}