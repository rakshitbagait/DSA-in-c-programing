//Fibonacci Series by recursion
#include <stdio.h>
#include <stdlib.h>

int fib(int n){
    if(n==0) return 0;
    else if(n==1) return n;
    else{
        return(fib(n-1)+fib(n-2));
    }
}
int main() {
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        printf("%d,",fib(i));
    }
	return 0;
}