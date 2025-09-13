#include <stdio.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 101;
    // And so on till facebook[99].code
    printf("%d %d\n", facebook[0].code, facebook[1].code);

    // Other ways of initializing an structure
    struct employee sourya = {100, 71.22, "Sourya"};
    printf("%d %.2f %s", sourya.code, sourya.salary, sourya.name);
    return 0;
}