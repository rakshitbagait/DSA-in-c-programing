// sum of digits of number using iteration

#include<stdio.h>

int main()
{
    int n,a ,ans=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        ans+=a;
        n=n/10;

    }
    ans=ans+n;
    printf("%d is the answer",ans);

}