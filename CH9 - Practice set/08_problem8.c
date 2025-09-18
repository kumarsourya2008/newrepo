#include <stdio.h>

typedef struct bankacc{
    int accNo;
    char name[34];
    char ifsc[12];
    float balance;
} Acc;

int main(){
    Acc a1 = {1234, "Sourya", "ABCDEFGHIJK", 2000000.00};
    printf("The account number is %d\n", a1.accNo);
    printf("The name is %d\n", a1.name);
    printf("The ifsc is %d\n", a1.ifsc);
    printf("The balance is %.2f\n", a1.balance);
    return 0;
}