

// Write a code to execute the concept of pointer to pointer.

#include <stdio.h>
int main() {
    int n=4;
    int *p=&n;
    int **m=&p;

    printf("Value of n:%u",**m);
    return 0;
}