#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sourya.txt", "a");
    int num = 432;
    fprintf(fptr, "%d", num);  // We have to use only fprintf to append in the text file
    // We dont need to write fscanf in this append mode code
    fclose(fptr);

    return 0;
}