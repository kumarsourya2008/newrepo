#include <stdio.h>

int main(){
    int product = 1;
    int i = 1, n;
    printf("Enter no. : ");
    scanf("%d", &n);
    while(i <= n){
        product *= i;
        i++;
    }
    printf("The factorial of %d is %d", n, product);
    return 0;
}