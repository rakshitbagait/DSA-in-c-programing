// sum of a harmonic series upto n number
#include<stdio.h>
int main(){
    float n=1.0; int terms ,count=0;float sum=0.0;
    printf("enter the number of terms in harmonic series");
    scanf("%d",&terms);
    while(count <=terms){
        sum = sum+1.0/n;
        n++;
        count++;
    }printf("%f",sum);
    return 0;

}