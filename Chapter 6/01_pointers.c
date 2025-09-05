#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i;  // j is a pointer pointing to i (j is an integer pointer)
    printf("The address of j is %p\n", j);
    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", &i);  // We can also use '%u' for showing in integer
    printf("The address of j is %u\n", j);
    // '%u' means unsigned integer

    printf("The value at address j is %d\n", *j);  // '*' operator is used to obtain the value present at a given memory address
    printf("The value at address i is %d\n", *(&i));
    return 0;
}