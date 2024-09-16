// Given a number n, print all primes smaller than or equal to n.
//  It is also given that n is a small number. 

// Example: 

// Input : n =10
// Output : 2 3 5 7 

// Input : n = 20 
// Output: 2 3 5 7 11 13 17 19

#include <stdio.h>
#include <stdlib.h>
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
    for(i; i<=num;i++){
        if(prime(i)==true){
            printf("%d,",i);
        }
    }
    return 0;}