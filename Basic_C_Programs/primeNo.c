// To check if a number is a prime number or not

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int num,a =0;
    printf("Enter the number");
    scanf("%d",&num);
    if(num>2){
        for(int i=2;i<num;i++){
        if(num%i==0){
           a =1;
            break;

        }
    }
    if(a==1){
        printf("Composite");

    }
    else printf("Prime");

    }
    else printf("prime");
    
	return 0;
}
