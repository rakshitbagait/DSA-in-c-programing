// largest three

#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    int n;
    printf("ENter the nubmer of terms in array");
    scanf("%d",&n);

	int arr[n];
    for(int i =0; i<n;i++)
    {
        printf("Enter the element %d",i+1);
        scanf("%d",&arr[i]);

    }

    // using quick sort
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d,%d,%d",arr[n-1],arr[n-2],arr[n-3]);

	return 0;
}