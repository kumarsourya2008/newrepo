#include <stdio.h>

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        
    }
    printf("\n");
    
}

void reverse(int arr[], int n){
    /* {1, 2, 3, 4, 5, 6}  --> Elements
    {0, 1, 2, 3, 4, 5}     --> Indexing
    n = 6
    # SWAPPING #
    0 - 5
    1 - 4
    2 - 3
    stop

    for i from o to n/2 
    arr[i] arr[n-i-1]*/

    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}

