// printing the counting till 100 using recursion

#include <stdio.h>
#include <stdlib.h>


int counting(int n)
{
    if(n==1)
    {
        return 1;
    }
    counting(n-1);
    printf("%d",n);
}
int main(void)
{
	counting(10);
	return 0;
}