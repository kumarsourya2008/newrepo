#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sourya.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);  // The value of num is 12
    
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);  // The value of num is 34

    fclose(ptr);

    return 0;
}