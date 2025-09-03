#include <stdio.h>

// From while loop

int main(){
    int s;
    printf("Enter the no. : ");
    scanf("%d", &s);
    int i = 10;
    while(i){
        printf("%d X %d = %d\n", s, i, s * i);
        i--;
    }
    return 0;
}


// From for loop

// int main(){
//     int n;
//     printf("Enter no. : ");
//     scanf("%d", &n);
//     for (int i = 10; i; i--)
//     {
//         printf("%d X %d = %d\n", n, i, n * i);
//     }
    
//     return 0;
// }