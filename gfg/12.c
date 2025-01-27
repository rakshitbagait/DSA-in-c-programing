#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

// perfect number


int main(void) 
{
    int num ;
    printf("enter the number");
    scanf("%d",&num);
    int sum=0,same=num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;

        }
    }
    if(sum==same)
    {
        printf("yes");

        return true;

    }
    else
    {
        printf("No");
        return false;
    }
    return 0;
}
