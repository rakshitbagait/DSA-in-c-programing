#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[50],size,count,i;
    printf("enter the number of values you want in array");
    scanf("%d",&count);		
    // inputing the array
    for(i=1;i<=count;i++){
        printf("\nenter the element:%d",i);
        scanf("%d",&arr[i]);
    }
    size=count;
    // printing the array before deletion
    printf("\nthe array before deletion is:\n");
    for(i=1;i<=count;i++){
        printf("%d,",arr[i]);
    }
    int pos;
    printf("\nEnter the position of element you want to delete");
    scanf("%d",&pos);
    // Deleting the element 
    if(pos<=0||pos>size){
        printf("invalid position");
        return -1;
    }
    else{
        for(i=pos;i<=size;i++){
            arr[i]=arr[i+1];
        }
        size--;
        // printing the new array
        for(i=1;i<=size;i++){
            printf("%d,",arr[i]);
        }
    }	
    return 0;
}