// 2) Print the factorial of n Entered vby the User.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    printf("The factorial of n is :%d",fact);
    return 0;

}