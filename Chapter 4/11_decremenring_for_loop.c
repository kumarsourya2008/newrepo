#include <stdio.h>

int main(){
    int i, n;      // We can declare 'i' separately
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = n; i; i--)     // condition is true if 'i' is NOT Zero and Negative because in c language anything if it is a non-zero is TRUE
    // Condition 'i' is checked & code is executed if it's not 0
        printf("%d\n", i);  // No need to apply curly braces '{}' if it is a single line statement
    
    return 0;
}