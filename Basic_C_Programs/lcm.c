#include <stdio.h>
#include <stdlib.h>
int main(void) {
     long x,y ,i=2;
    printf("enter the 2 number for lcm");
    scanf("%lu %lu",&x,&y);
     while(1)
     {
        if(i%x==0&&i%y==0){
            printf("the answer is: %lu",i);
            break;
     }
     else ++i;
     }
	return 0;
}