#include <stdio.h>

void printstring(char arr[]);

int  main(){
   char name[47];
   scanf("%s", name);
   printf("The Entered String is:%s",name);
}

void printstring(char arr[]){
    for(int i=0;arr[i]!=0;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}