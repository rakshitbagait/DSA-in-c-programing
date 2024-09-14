// prime Factoristion of a number 
#include <stdio.h>
#include <stdbool.h>

int prime(int i){
    if(i>2){
        for(int j=2;j<i;j++){
        if(i%j==0){
           return false;
           break; 
        }
        else {
           return true;
            break;}
        }

    }
    else{
        return true;
    }
}
int main() {
    int num ,i=2;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=1){
        if(prime(i)==true)        // check i prime
        {
            if(num%i==0){
                num =num/i;
                printf("%d,",i);
            }
            else{
                i++;
            }
        }
        else{
            i++;
        }
    }
	return 0;
}