// To calculate the average of numbers using iterarion
#include<stdio.h>
int main(){
    int count=0, sum=0, num, average,terms;
    printf("enter the number of numbers you want");
    scanf("%d",&terms);

    while(count<terms){
        printf("enter the number");
        scanf("%d\n",&num);
        sum =sum+num;
        count++;
    }
    average =sum/terms;
    printf("The average of the numbers is %d",average);
    return 0;
}