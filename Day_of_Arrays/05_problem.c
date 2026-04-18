/* Write a Arry Function for the reversing of array elements */

#include <stdio.h>
void printArr(int arr[],int n);
void reverse(int arr[],int n);

int main() {
    int arr[]= {1,2,3,4,5,6};
    reverse(arr,6);
    printArr(arr,6);
    return 0;
}

void printArr(int arr[],int n){
    for (int i=0;i<n;i++)
     printf("%d\t",arr[i]);
     printf("\n");
}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
    int first_val =arr[i];
    int second_val= arr[n-i-1];
    arr[i]=second_val;
    arr[n-i-1]=first_val;
    }

}
