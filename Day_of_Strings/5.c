// Write a Program that inputs users ame and prints the  length of the strng


#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Entered the Desired String:");
    scanf("%s",str);
    printf("The Length of the string enteed is:%d",strlen(str));                                          
}