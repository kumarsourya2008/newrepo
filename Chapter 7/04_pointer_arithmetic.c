#include <stdio.h>

int main(){

    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 5;
    int* ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;  // PTR INCREMENTS TO 4 BECAUSE INTEGER TAKES 4 BYTES
    // *** THE PTR WILL INCREMENT BY THE NUMBER OF BITS IT TAKES ***
    printf("The value of ptr is %u\n", ptr);

    printf("\n");

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char b = 'A';
    char* ptr1 = &b;
    printf("The address of b is %u\n", &b);
    printf("The address of b is %u\n", ptr1);
    ptr1++;  // PTR INCREMENTS TO 1 BECAUSE A CHARACTER TAKES 1 BYTES
    // *** THE PTR WILL INCREMENT BY THE NUMBER OF BITS IT TAKES ***
    printf("The value of ptr1 is %u\n", ptr1);

    return 0;
}