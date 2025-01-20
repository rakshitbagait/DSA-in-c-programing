// Factorial of a number

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, fact = 1;
    printf("Enter the number you want to find the factorial:");
    scanf("%d", &num);
    while (num >= 1)
    {
        fact *= num;
        num--;
    }
    printf("the answer is %d", fact);
    return 0;
}
