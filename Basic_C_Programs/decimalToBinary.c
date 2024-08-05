#include<stdio.h>
int decimalTobinary(int deci){
    if(deci>1){
         decimalTobinary(deci/2);
         
    }
    printf("%d",deci%2);
    
}
int main(){
    int num;
    printf("enter the decimal number ");
    scanf("%d",&num);
    printf("the answer is");
    decimalTobinary(num);
    return 0;

}