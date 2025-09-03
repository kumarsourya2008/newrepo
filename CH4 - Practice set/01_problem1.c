#include <stdio.h>

// From while loop

// int main(){
//     int s;
//     printf("Enter the no. : ");
//     scanf("%d", &s);
//     int i = 1;
//     while(i <= 10){
//         printf("%d X %d = %d\n", s, i, s * i);
//         i++;
//     }
//     return 0;
// }

// From for loop

#include <stdio.h>

int main(){
    int n;
    printf("Enter no. : ");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    
    return 0;
}