

//  Write a code to check the number entered by the user is prime number or not

#include <stdio.h>
int main() {
    int n,i=2;
    printf("Enter the value of n:");
    scanf("%d",&n);

    if (n <= 1){
        printf("Not Prime");
        return 0;
    }

    while(n > i){
        if( n%i == 0) {
            printf("Not Prime");
            i++;
        }
    }
printf("Prime");
return 0;
}