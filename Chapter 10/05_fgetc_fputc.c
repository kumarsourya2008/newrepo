#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("sourya.txt", "r");  // If we are using only read mode we have to use only "fgetc"
    // char c = fgetc(ptr);      // used to read a character from file
    // printf("%c", c);
    // fputc('c', ptr); // used to write character 'c' to the file

    ptr = fopen("sourya.txt", "a");  // If we are using only write or append mode we have to use only "fputc"
    // char c = fgetc(ptr);      // used to read a character from file
    // printf("%c", c);
    fputc('c', ptr); // used to write character 'c' to the file

    return 0;
}