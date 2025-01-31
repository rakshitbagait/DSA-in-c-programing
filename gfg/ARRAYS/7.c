//  check if the array is sorted

#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    int arr[10] ={123,1232,728,23,432};
      int a=0;
    for(int i=0;i<9;i++)
    {
        a=0;
      
        if(arr[i]>arr[i+1])
        {
            printf("unsorted");
            break;

        }
        else
        {
            a =1;
        }

    }
    if(a==1)
    {
        printf("sorted");
    }
				
	return 0;
}