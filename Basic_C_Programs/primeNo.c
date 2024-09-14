// To check if a number is a prime number or not

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num>2){
        for(int i=2;i<num;i++){
        if(num%i==0){
            printf("Composite");
            break;

        }
        else {
            printf("prime");
            break;}
    }

    }
    else printf("prime");
    
	return 0;
}
