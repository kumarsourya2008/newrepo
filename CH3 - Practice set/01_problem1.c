#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)    // No need of curly brackets if 'if' has single statement
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}