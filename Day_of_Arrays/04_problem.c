/* Write a function to cont the number of odd numbers given in the given array */

#include <stdio.h>
int CountOdd(int arr[],int n);

int main() {
    int arr[]={1,2,3,4,5,6};
   printf("%d\n", CountOdd(arr,6));
    return 0;
}

int  CountOdd(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i] %2 !=0){
        count ++;
        }
    }
        return count;
    
}

