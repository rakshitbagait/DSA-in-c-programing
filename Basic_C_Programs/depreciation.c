// To calculate the depreciation of an item

#include<stdio.h>
int main(){
    float depreciation , cost, salvage, years;
    printf("Enter the cost value:");
    scanf("%f",&cost);
    printf("Enter the salvage value:");
    scanf("%f",&salvage);
    printf("Enter the years of service:");
    scanf("%f",&years);
    depreciation = (cost- salvage)/years;
    printf("\nThe depreciation of %.3f in %1.0f years is: %.2f",cost,years,depreciation);

}
