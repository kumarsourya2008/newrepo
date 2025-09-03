#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    printf("Enter d : ");
    scanf("%d", &d);

    if(a>b && a>c && a>d){
        printf("The greatest of all is %d", a);
    }
    // We can also use only if statements in below
    else if(b>a && b>c && b>d){
        printf("The greatest of all is %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("The greatest of all is %d", c);
    }
    else if(d>a && d>b && d>c){
        printf("The greatest of all is %d", d);
    }
    return 0;
}