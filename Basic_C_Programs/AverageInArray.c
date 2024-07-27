#include<stdio.h>
int main(){
    int arr[10];
    int sum =0, count=1,value;
    printf("enter the number of values");
    scanf("%d",&value);
    for(count;count<=value;count++){
        printf("enter the value");
        scanf("%d",&arr[count]);
        sum += count;

    }
    printf("The sum is:%d",sum);
    return 0;
}