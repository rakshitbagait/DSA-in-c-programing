#include<stdio.h>
int main(){
    char itemName[50];
    int quantity[50],i=1,item,count=1;
    float rate[50],amount[50],total=0;
    printf("enter the number of item");
    scanf("%d",&item);
    while(i<=item){
        printf("Enter item %d",i);
        scanf("%s",&itemName[i]);
        printf("Enter the quatity");
        scanf("%d",&quantity[i]);
        printf("enter the rate");
        scanf("%f",rate[i]);
        amount[i] = quantity[i]*rate[i];
        total = total+amount[i];
        i ++;
    
    }
    printf("--------------------\n");
    printf("--------BILL--------\n");
    printf("S.no\t\tItem Name\t\tQuantity\t\tRate\t\tAmount");
    while(count<=item){
        printf("%d\t\t%s\t\t%d\t\t%f\t\t%f\n",count,itemName[i],quantity[i],amount[i]);
        count++;
        printf("--------------------\n");
            }
    printf("TOTAL%f",total);
    printf("-------------------------");
    return 0;
}