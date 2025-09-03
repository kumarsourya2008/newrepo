#include <stdio.h>

int main(){
    int a = 1;
    printf("The value of a is %d\n", a);
    a = a + 1;     // Without int in starting it will change the value i.e defined **
    // If we give a in starting it will give an error telling a is already defined **
    printf("The value of a is %d\n", a);
    return 0;
}