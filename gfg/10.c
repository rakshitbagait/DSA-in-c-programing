
// CO-PRIME
#include <stdio.h>
#include <stdlib.h>
int coprime(int n1,int n2)
{
    int min ;
    min=n1<n2?n1:n2;
    while (min>0)
    {
        if(n1%min==0&&n2%min==0)
        {
            printf("the HCF is%d",min);
            break;
        }
        min--;

    }
    if(min==1)
    {
        printf("\nThe numbers are co-prime");

    }
    else
    {
        printf("\nThe numbers are not a co-prime");
    }
    return 0;
    
}    
int main(void)
{
    int n;
    printf("enter the n");
    scanf("%d",&n);
    int n2;
    printf("enter the n2");
    scanf("%d",&n2);

    coprime(n,n2);

    return 0;
}