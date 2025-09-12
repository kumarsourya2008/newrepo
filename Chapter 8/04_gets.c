#include <stdio.h>

int main(){
    
    char st[30];
    // Gets is a function which can be used to "recieve" a multi-word string
    gets(st); // The entered string is stored in st!

    printf("%s", st);
    // Likewise, puts can be used to output a string
    puts(st);  // Prints the string & places the 'cursor' on the next line
    printf("hey");
    return 0;
}