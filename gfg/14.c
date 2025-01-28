// Decimal TO binary

#include <stdio.h>
#include <stdlib.h>



int main(void) 
{
    int binary[32];
    int n,i=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        binary[i]=n%2;
        n=n/2;

    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
	return 0;
}
