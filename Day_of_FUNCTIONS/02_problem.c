

//  Write a Function to pget the square of the number n entered by the user
# include <stdio.h>
# include <math.h>

int square(int n);
  


int main() {
    int n;
    printf("Enter the number n: ");
    scanf("%d",&n);

    int result = square(n);
    printf("Square = %d", result);

    return 0;
}

int  square(int n){
      return n * n;
}