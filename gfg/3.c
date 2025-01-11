// check the prime number
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    int a = 2;
    if (num != 2)
    {
        while (a < num)
        {
            if (num % a == 0)
            {
                a = 0;
                break;
            }

            else
            {
                a++;
            }
        }

        if (a == 0)
        {
            printf("composite");
        }
        else
        {
            printf("prime");
        }
    }
    else
    {
        printf("prime");
    }
    return 0;
}