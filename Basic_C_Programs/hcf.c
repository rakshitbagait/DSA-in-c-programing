// HCF of two numbers iterative

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num1,num2,min,max,ans,temp;
    printf("enter the 2 numbers");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        max=num1;
        min=num2;
    }
    else{
        max=num2;
        min = num1;

    }
    while(1){
        if(num1%max==0&&num2%max==0){
            printf("%d",max);
            break;
        }
        else{
            max--;
        }
    }
    return 0;

}