// 1
// 135
// 1357

#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a =a+2;
        }
        printf("\n");
    }
}