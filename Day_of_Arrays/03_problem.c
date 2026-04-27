/* Write a Function which uses array as the  parameter ,and prints the numbers present in thr array*/

#include <stdio.h>

    void printNumbers(int arr[],int n);

    int main() {

    int arr[]={12,24,35,56};
    printNumbers(arr,4);
        return 0;
    }

void printNumbers(int arr[],int n){
for(int i=0;i<n;i++){
    printf(" %d\t",arr[i]);
}
}

