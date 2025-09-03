#include <stdio.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    // for (initialize; test; increment or decrement)
    for(int i=0; i<n; i++){
        printf("The value of i is %d\n", i);
    }
    return 0;
}
