#include <stdio.h>
#include <stdlib.h>
int swap(int num1, int num2){
    int c ;
    c = num1;
    num1=num2;
    num2=c;
    printf("the nuber after swap are %d,%d",num1,num2);
    return 0;

}
int main(void) {
    int a,b,c;
    printf("Enter the two numbers to swap:");
    scanf("%d%d",&a,&b);
    swap(a,b);
	return 0;
}