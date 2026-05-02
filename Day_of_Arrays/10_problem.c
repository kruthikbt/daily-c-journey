10. Find the second largest element in an array

#include <stdio.h>

int main() {
    int arr[] = {10, 45, 23, 67, 67, 34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = -1, second = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest = %d", second);
    return 0;
}