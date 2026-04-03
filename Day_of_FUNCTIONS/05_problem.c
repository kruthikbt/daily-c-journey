

// write a function in c to find a root of a number in c

#include <stdio.h>
#include <math.h>

double findRoot(double num) {
    return sqrt(num);
}

int main() {
    double n = 25;
    printf("Square root = %.2lf", findRoot(n));
    return 0;
}