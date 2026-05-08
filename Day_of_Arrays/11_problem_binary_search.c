/*  A college library has a digital bookshelf system where each book 
 is  assigned  a  unique  Book  ID.  The  bookshelf  is  organized  in 
 ascending order of Book IDs. Develop a C Program to quickly find 
 whether a book with a specific Book ID is available in the shelf. */


 #include <stdio.h>
 int main(){

    int n,i,key,low,high,mid,found=0;
    int arr[50];
    printf("Enter the number of Books");
    scanf("%d",&n);
    printf("Enter the Book IDs in ascending order:\n");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter Book ID to be searched");
    scanf("%d",&key);

    low=0;
    high=n-1;
    while(low<=high){
        mid =(low+high)/2;
        if(arr[mid]==key){
            found = 1;
            break;
        }
    else if(arr[mid]<key){
        low = mid +1;
    }

    else{
        high=mid - 1;
    }
}

if(found == 1){
    printf("Book is available\n");
}

else{
    printf("Book Not Available\n");
}
    return 0;

 }