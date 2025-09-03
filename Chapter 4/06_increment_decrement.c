#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of a is %d\n", i);

    i = i + 5;  // 10
    printf("The value of a is %d\n", i);

    printf("The value of i is %d\n", i++);  // 10
    printf("The value of i is %d\n", i);    // 11
    printf("The value of i is %d\n", ++i);  // 12
    // i++ prints i first and then increments i (Post Increment Operator)
    // ++i increments i first and then prints i (Post Increment Operator)

    printf("The value of i is %d\n", i--);  // 12
    printf("The value of i is %d\n", i);    // 11
    printf("The value of i is %d\n", --i);  // 10
    // i-- prints i first and then decrements i (Post Decrement Operator)
    // --i decrements i first and then prints i (Post Decrement Operator)
    
    i += 2; // Same as i = i + 2;
    printf("The value of i is %d\n", i);    // 12
    
    return 0;
}