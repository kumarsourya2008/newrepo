#include <stdio.h>

int main(){
    // int age = 15;
    int age;
    scanf("%d", &age);  //Input from user

    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater then 10\n");
    }

    if(age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 5\n");
    }

    return 0;
}