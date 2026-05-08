// A sports teacher has recorded the scores of students in a 100-meter race. To prepare the result sheet, the 
// teacher wants the scores arranged in  descending order (from highest to lowest). Develop a C program to 
// sort the scores. 

#include <stdio.h>
int main(){
    int n,i,j,pop;
    printf("Enter the number of Students as array elements:");
    scanf("%d",&n);
    int scores[n];
    printf("Enter the scores:\n");
    for(i=0;i<n;i++){
        scanf("%d",&scores[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(scores[j]<scores[j+1]){
                pop=scores[j];
                scores[j]=scores[j+1];
                scores[j+1]=pop;
            }

        }
    }
    printf("The scores in descending order are:\n");
    for(i=0;i<n;i++){
        printf("%d ",scores[i]);
    }   
    return 0;
    
}