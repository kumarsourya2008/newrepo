#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sourya.txt", "w");
    int num = 432;
    fprintf(fptr, "%d", num);  // We have to use only fprintf to write in the text file
    // We dont need to write fscanf in this write mode code
    fclose(fptr);

    return 0;
}