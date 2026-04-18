/* Write a program to show the comparision and differnce of pointers*/

#include <stdio.h>
int main() {
    int age = 23;
    int *ptr = &age;
    int _age = 54;
    int *_ptr =&_age;

    printf("The difference is :%u\n",ptr - _ptr);
    printf("Comparision :%u\n",ptr == _ptr);
    return 0;
}