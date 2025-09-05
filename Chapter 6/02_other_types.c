#include <stdio.h>

int main(){
    char i = 72;
    char* j = &i;  // j is a pointer pointing to i (j is an character pointer)

    float k = 2.232;
    float* k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of j is %p\n", j);
    printf("The address of k is %p\n", &k);
    printf("The address of k1 is %p\n", k1);
    return 0;
}