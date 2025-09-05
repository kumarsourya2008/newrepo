#include <stdio.h>


void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4, b = 6;  // a is 3 and b is 4
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;  //now a is 4 and b is 3
}