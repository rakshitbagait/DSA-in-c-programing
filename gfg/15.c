#include <stdio.h>
#include <stdlib.h>

// 1,3,6,10

int main(void)
{
    int a = 1;
    int d = 2;
    int n;
    printf("enter the n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        a += d;
        d++;
    }
    printf("%d", a);
    return 0;
}