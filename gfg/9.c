// hcf

#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	int num1,num2;
    printf("Enter the number");
    scanf("%d %d",&num1,&num2);
    int min=(num1<num2)?num1:num2;
    while(min>0)
    {
        if(num1%min==0&&num2%min==0)
        {
            printf("%d",min);
            break;
        }
        min--;

    }		
	return 0;
}