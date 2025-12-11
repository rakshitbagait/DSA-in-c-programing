#include <stdio.h>
#include <stdlib.h>

int bprint(int n ){
    if(n==0){
        return 0;
    }
    else{
        printf("%d",n);
        return bprint(n-1);
        
    }
}
int main(void) {
	printf("%d",bprint(10));
    return 0;
}