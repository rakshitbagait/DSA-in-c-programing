// remove duplicates

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("enter the number of elements in array");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element");
        scanf("%d", &arr[i]);
    }

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
    printf("The original array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }

    int a = n;
    for (int i = 0; i <n; i++)
    {
        if (arr[i] == arr[i+1])
        {
            for(int j=1;j<n;j++)
            {
                arr[j]=arr[j+1];

            }
            a--;
        }
    }
    printf("The array after removal");

    for (int i = 0; i <a; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}
