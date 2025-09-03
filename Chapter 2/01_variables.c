#include <stdio.h>

int main(){
    int i; //Declared and initialized 'i' with 10
    scanf("%d", &i);
    int j = i;
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    // Assigning the same value to multiple variables
    int w, x, y, z;
    w = x = y = z = 30; // w x, y, z all equal to s1 taken from user
    printf("The value of w is %d\n", w);
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n", z);
    // %d is called format specifier
    // %d is for int, %f is for float and %c is for char
    printf("The value of i is %d and the value of j is %d\n", i, j);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    printf("The value of c is %d and the value of d is %d\n", c, d);
    return 0;
}