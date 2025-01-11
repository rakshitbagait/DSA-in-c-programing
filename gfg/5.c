// Valid Triangle

#include <stdio.h>
#include <stdlib.h>

int validity(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    validity(7, 10, 5);
    if (validity == 0)
    {
        printf("invalid triangle");
    }
    else
    {
        printf("A vlaid triangle");
    }
    return 0;
}
