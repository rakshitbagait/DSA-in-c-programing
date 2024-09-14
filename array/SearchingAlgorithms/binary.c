#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[],int size,int num){
    int s= 0;
    int e =arr[size-1];
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==num){
            return mid;
        }
        else if(arr[mid]<num){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(void) {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int num,size=sizeof(arr)/sizeof(arr[0]);
    printf("enter the element you want to fin");
    scanf("%d",&num);
    printf("%d",binarySearch(arr,size,num));
	
     int result = binarySearch(arr, size, num);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }
return 0;
}