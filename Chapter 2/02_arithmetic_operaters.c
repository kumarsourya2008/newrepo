#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and the value of b is %d and the sum is %d\n", a, b, c);
    // Modulus operater is used to get the remainder
    printf("The remainder when a is divided by b is : %d", a%b);
    return 0;
}