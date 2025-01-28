#include <stdio.h>
#include <stdlib.h>
// nth fibonnaci number

int fib (int num)
{
	if (num==0||num==1)
	{
		return num;
	}
	return(fib(num-1)+fib(num-2));
	
}

int main(void) 
{
	int num=13;
	int result =fib(num);
	printf("%d",result);
	return 0;
}