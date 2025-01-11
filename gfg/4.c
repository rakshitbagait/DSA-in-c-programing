// to check if the a number is power of another number

#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	long a, b, power=0;
    // the a is the number and b is the result of a power of the number 
    printf("Enter the value of number  and number 2");
    scanf("%ld %ld",&a,&b);
    while(a!=b)
    {
        if(power*a==b)
        {
            
            printf("True! The power of a to b is:%ld",power);
            power=0;
            break;
        }
        else
        {
            power++;
        }
    }
    if (power!=0)
    {
        printf("False");

    }
	return 0;
}