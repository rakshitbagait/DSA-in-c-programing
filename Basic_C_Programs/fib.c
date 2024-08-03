#include <stdio.h>

int main() {
	int a =0,b=1,terms,c;
    printf("enter the number of terms");
    scanf("%d",&terms);
    printf("%d\'",a);
    printf("%d\'",b);
    for(int i =0;i<terms-2;i++){
        c=a+b;
        printf("%d\'",c);
        a=b;
        b=c;
        
    }
	return 0;
}