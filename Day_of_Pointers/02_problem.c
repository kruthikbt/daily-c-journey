

// Swap the numbers 5 and 3 by using pointers.
#include <stdio.h>
void _swap(int *a, int *b);

int main() {
    int x=5,y=3;

    _swap(&x,&y);     
    printf("x=%d & y=%d\n",x,y); 
     return 0;
}

// Call by reference...
void _swap(int *a,int *b){
    int  t = *a;
    *a = *b;
    *b = t;
     printf("a=%d & b=%d\n",*a,*b);
}