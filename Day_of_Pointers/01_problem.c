

// Write a function using pointers to return the sum of two values,product and the Average of two values.

#include <stdio.h>
void operation(int a,int b,int *sum,int *prod,int *avg);

int main() {
    int a=5,b=6;
    int sum,prod,avg;
    operation(a,b,&sum,&prod,&avg);
    printf("Sum is:%d\nproduct is:%d\nAverage is:%d",sum,prod,avg);
    return 0;
}


void operation(int a,int b,int *sum,int *prod,int *avg){
  *sum = a+b;
  *prod = a * b;
  *avg = a+b/2;
}