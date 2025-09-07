#include <stdio.h>

int main(){
    // char st[] = {'a', 'b', 'c', '\0'};   // ** '\0'  is a null character used to mark that given string ending **
    // OR a null character is used to denote the termination of a string
    
    char st[] = "abc";   // Same as doing char st[] = {'a', 'b', 'c', '\0'};
    // When using double quotes ("") the null character '\0' will automatically appeared

    for (char i = 0; i < 3; i++)
    {
        printf("Character is %c \n", st[i]);
    }

    return 0;
}