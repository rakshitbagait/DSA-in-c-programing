// Linear Search

#include <stdio.h>
#include <stdlib.h>


int main(void) 
{

    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int element;
    printf("endter the element to find");
    scanf("%d",&element);
    int size =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            printf("The index of %d is :%d",element, i);
            break;
            
        }
    }
				
	return 0;
}