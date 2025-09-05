#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);  // If 'printf' has same variable then evaluation order is from "right to left"
    // #3 - a = 6, #2 - ++a = 6, #1 - a++ = 4  // If evaluation order(#n) is from "right to left"
    // 6 4 4 //

    // #1 - a = 4, #2 - ++a = 5, #3 - ++a = 5  // If evaluation order(#n) is from "left to right"
    // 4 5 5 //

    // ("BOTH ARE CORRECT") //
    return 0;
} 