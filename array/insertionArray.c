//This program is made to insert an element in an array
#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int arr[50],count,i,size ;
    
    printf("enter the number of element in array");
	scanf("%d",&count);
    // inputing the array
    for(i=1;i<=count;i++){
        printf("enter the element %d",i);
        scanf("%d",&arr[i]);

    }
    size= i;
    //displaying the array before insertion
    printf("array before insertion:\n");
    for(int i=1; i<=count;i++){
        printf("%d\'",arr[i]);

    }
    // inserting an elment 
    int pos ,num;
    printf("\nenter the position of element in array");
    scanf("%d",&pos);
    printf("enter the you want to insert");
    scanf("%d",&num);
    //To forward the value 
    if(pos>=1&&pos<=size+1){ 
        for(int j =size-1; j>=pos-1;j--){
                arr[j+1]=arr[j];
        }
        arr[pos]=num;
        size++;

        //array after insertion
        printf("array after insertion\n");
        for(int j=1;j<size;j++){
            printf("%d,",arr[j]);
        }
    }
    else{
        printf("invalid position");
        return -1;
    }
   
     
	return 0;
}