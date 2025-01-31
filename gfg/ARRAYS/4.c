// the argest element in an array


#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    int arr[]={1,342,442,32,23,131,423,232};
    int size =sizeof(arr)/sizeof(arr[0]);
    int element =arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=element)
            element=arr[i];
    }
    for(int i=0; i<size;i++)
    {
        printf("%d,",arr[i]);

    }
    printf("\n%d,",element);
				
	return 0;
}