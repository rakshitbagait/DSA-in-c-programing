#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int arr[5]={3,5,8,9,1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }  
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    

				
	return 0;
}