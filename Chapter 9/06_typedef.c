#include <stdio.h>
#include <string.h>

typedef struct employee  // ** THIS IS MOSTLY USED **
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp; // Semicolon after name declaration

int main(){
    // typedef int sourya;
    // sourya a = 88;
    // printf("The vaue of a is %d\n", a);

    Emp e1;
    Emp* ptr1 = &e1; 
    e1.code = 4511;
    strcpy(e1.name, "Sourya");
    e1.salary = 54.44;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}