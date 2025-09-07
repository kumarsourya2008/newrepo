#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "Sourya";

    printf("%d\n", strlen(st));  // Returns length of the string

    char target[30];
    strcpy(target, st); // target now contains "Sourya"
    printf("%s %s\n", st, target);

    char s1[56] = "Sourya";
    char s2[] = " bhai";
    strcat(s1, s2);  // Concatenates/Adds two strings
    // s1 now contains "Sourya bhai" <no space in between>
    printf("%s\n", s1);

    int a = strcmp("apple", "ball");    // Negative value because first string's 'a' will come first in "ascii series", then 'b' comes
    // --> (1st element's first letter ascii value < 2nd element's first letter ascii value) - Negative
    // ==> If first element is small =  Negative

    int b = strcmp("ball", "apple");  // Positive value because first string's 'b' will come later in "ascii series"
    // --> (1st element's first letter ascii value > 2nd element's first letter ascii value) - Positive
    // ==> If first element is big = Positive

    int c = strcmp("ball", "ball");  // Return Zero ('0')
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", c);

    return 0;
}