#include <stdio.h>
#include <stdlib.h>

int main() {
    int row=3;
    int coloumn=5;

    //Assigning the memory location for three rows.
    int **arr=(int **)malloc(row * sizeof(int*));

    for(int i=0;i<row;i++){
        arr[i]= (int *)malloc(coloumn * sizeof(int));

    }

    //Input the elements as 2D array.
    printf("Enter 15 Elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n\n");
    //Displaying the result
    printf("The matrix is: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    //freeing the memory location;
    for(int i=0;i<row;i++){
        free(arr[i]);
    }

    free(arr);
    return 0;
}