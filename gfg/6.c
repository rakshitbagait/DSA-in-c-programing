// square root

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b = 2;
    int c = 0;
    printf("Enter the number to check the sqaure root of the number");
    scanf("%f", &a);

    while (b <= a)
    {
        if (b * b == a)
        {
            c = 1;
            break;
        }
        b++;
    }
    if (c == 1)
    {
        printf("The square root of %f is %f", a, b);
    }
    else
    {
        printf("not a perfect square");
    }
    return 0;
}
