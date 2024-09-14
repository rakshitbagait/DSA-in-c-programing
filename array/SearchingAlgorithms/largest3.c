#include <stdio.h>
#include <stdlib.h>
int n;
// this program is to find the 3 maximum number in an array
void arrInput(int arr[]);
int largest(int arr[],int size);
int main(void) {
    int arr[]={0},num;
	arrInput(arr);
    n=sizeof(arr)/sizeof(arr[0]);
    largest(arr,n);
	return 0;
}

void arrInput(int arr[]){
    int count;
    printf("enter the number of elements you want in array:");
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        printf("enter the element%d:",i+1);
        scanf("%d",&arr[i]);
    }
   
}
int largest(int arr[],int size){
    
        int first, second, third;
        for(int i=0;i<size;i++){
            if(arr[i]>arr[0]){
                third = second;
                second=first;
                first=arr[i];
            }
        else if(arr[i]>second){
            third=second;
            second=arr[i];
            }
        else{
            third=arr[i];}
        
    printf("The largest 3 elements in array %d,%d,%d",first , second ,third);

    }
    
    

}
