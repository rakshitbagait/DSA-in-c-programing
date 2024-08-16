#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int combination(int n, int r){
    return (fact(n)/(fact(r)*fact(n-r)));
}

int main() {
    int row;
    printf("Enter the row");
    scanf("%d",&row);
    for(int i= 0; i<row;i++){
        for(int j=0;j<=i;j++){
            int ans = combination(i,j);
            printf("%d",ans);
        }
        printf("\n");
    }


	return 0;
}