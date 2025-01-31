// numbers having exactly 3 divisors in n number of range

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, a = 0, j = 1,k=0;
    int arr[10];
    printf("enter the number of range");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        a=0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                a++;
            }
        }
        if (a == 3)
        {
           printf("%d",i);
        }

    }
    for(int i=0; i<k;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}