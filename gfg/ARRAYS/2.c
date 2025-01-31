// printing the alternates in an array//

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n ; 
    printf("enter the number of terms");
    scanf("%d",&n);
    int arr[n];

    int size = sizeof(arr)/sizeof(arr[0]);


    // to input the  array

    for(int i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<size;i+=2)
    {
        printf("%d",arr[i]);
    }
	return 0;
}