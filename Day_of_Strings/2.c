#include <stdio.h>

void printstring(char arr[]);

int  main(){
    char f_n[]="India";
    char s_n[]="Karnataka";
    printstring(f_n);
    printstring(s_n);
}

void printstring(char arr[]){
    for(int i=0;arr[i]!=0;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}