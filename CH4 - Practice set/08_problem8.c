#include <stdio.h>

int main(){
    // 2! = 1 X 2
    // 0! = 1 **
    int product = 1;
    int n;
    printf("Enter no. : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is %d", product);
    return 0;
}