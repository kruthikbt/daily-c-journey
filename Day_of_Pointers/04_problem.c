// Write a code to perform th pointer arithmatic using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int *ptr= (int *)malloc(n*sizeof(int));

    printf("Enter the Elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("\n");

    printf("The elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");

    printf("Pointer Operations\n");
    printf("First Element: %d\n",ptr[0]);
    printf("Second Element: %d\n",*( ptr +1));
    
    return 0;
}