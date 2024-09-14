#include <stdio.h>
#include <stdlib.h>
int n;
int linearSearch(int arr[],int num);
void arrInput(int arr[100]);

int main(void) {
    int arr[100],num;
	arrInput(arr);
    n=sizeof(arr)/sizeof(arr[0]);
    printf("enter the element you want to search");
    scanf("%d",&num);
    linearSearch(arr,num);

	return 0;
}

void arrInput(int arr[100]){
    int count;
    printf("enter the number of elements you want in array:");
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        printf("enter the element%d:",i+1);
        scanf("%d",&arr[i]);
    }
   
}
int linearSearch(int arr[],int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            printf("The index of %d is %d",num,i);
            break;
        }
    }
    return -1;
}