/* Write a program  to print the fibonacci series by using Arrays*/

#include <stdio.h>
int main() {
    int n;
    printf ("Enter the Number of Terms n (n>1): ");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<n;i++){
        fib[i]=fib[i-1] + fib[i-2];
        printf("%d",fib[i]);
    
    }
    printf("\n");
    return 0;
}