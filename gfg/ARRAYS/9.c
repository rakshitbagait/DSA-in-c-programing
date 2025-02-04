// reversing an array

#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int  temp;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size/2;i++)
	{
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;

    }
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);

    }			
	return 0;
}