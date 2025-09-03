#include <stdio.h>

int main(){
    int r;
    scanf("%d", &r);
    int height;
    scanf("%d", &height);
    printf("The area of the circle with radius %d is %f\n", r, 3.14*r*r);
    printf("The volume of the cylinder with radius %d and height %d is %f", r, height, 3.14*r*r*height);
    return 0;
}