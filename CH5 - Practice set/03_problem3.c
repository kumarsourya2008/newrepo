#include <stdio.h>

float force(float);

float force(float mass){
    return mass * 9.8;
}
int main(){
    int m;
    printf("Enter the no. : ");
    scanf("%d", &m);
    printf("The value of force is %f\n", force(m));
    return 0;
}