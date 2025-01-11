// printing counting using recursion
#include <stdio.h>
#include <stdlib.h>

int count(int num)
{
    if(num==0)
    {
        return 0;
    }
    count(num-1);    
    printf("%d\n",num);

}

int main(void) 
{
	count(100);		
	return 0;
}

