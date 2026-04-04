//Create a pointer function to calculate the length of the entered string from the console.

#include <stdio.h>

int str_length(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;   // move pointer to next character
    }

    return length;
}
 

int main() {
    char str[100];

    scanf("%s", str);

    printf("The length of the strong is:℅d", str_len(str) ;

    return 0;
}