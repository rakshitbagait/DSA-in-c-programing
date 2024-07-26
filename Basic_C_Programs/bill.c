#include<stdio.h>
int main(){
    char itemName[50][50];
    int quantity[50],i=0,item,count=0;
    float rate[50],amount[50],total=0;
    printf("enter the number of item");
    scanf("%d",&item);
    while(i<item){
        printf("Enter item %d",i);
        scanf("%s",&itemName[i]);
        printf("Enter the quatity");
        scanf("%d",&quantity[i]);
        printf("enter the rate");
        scanf("%f",&rate[i]);
        amount[i] = quantity[i]*rate[i];
        total +=amount[i];
        i ++;
    
    }
    printf("--------------------\n");
    printf("--------BILL--------\n");
    printf("S.no\tItem Name\tQuantity\tRate\t\tAmount\n");
    for(count;count<item;count++) {
        printf("%d\t%s\t\t%d\t\t%.2f\t\t%.2f\n", count+1 , itemName[count], quantity[count], rate[count], amount[count]);
        
    }

    printf("--------------------\n");
    printf("TOTAL: %.2f\n", total);
    printf("--------------------\n");

    return 0;
}