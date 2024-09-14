#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int num, sum=0,flag,b;
 
    printf("enter the number");
    scanf("%d",&num);
    b=num;
    while (num>0)
    {
        flag=num%10;
        sum = sum*10+flag;
        num=num/10;
    }
    printf("%d",b);
    if(b==sum){
        printf("palindrome");
    }
    else{
        printf("not");
    }

	return 0;
}