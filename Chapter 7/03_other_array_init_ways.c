#include <stdio.h>

int main(){
    int cgpa[3] = {9, 8, 8};  // Arrays can be initialized while declaration
    int marks[] = {33, 40};
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("The value of array at index %d id %d\n", i, marks[i]);
    }
    
    return 0;
}