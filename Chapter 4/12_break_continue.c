#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i == 5){
            // break;  // Exit the loop now!
            continue;  // Skips this iteration now!
        }
        printf("i is %d\n", i);
    }

    printf("For loop is done!");
    
    return 0;
}