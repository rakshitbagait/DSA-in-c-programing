#include <stdio.h>
#include <stdlib.h>

void towerOfHanoi(int n,char source , char aux , char dest)
{
    if(n==1)
    {
        printf("move disc 1 from %c to %c\n", source,dest);
        return;
    }
    towerOfHanoi(n-1,source,aux,dest);
    printf("Move disc %d from %c to %c\n" ,n,source, aux);
    towerOfHanoi(n-1,aux,source, dest);
    printf("Move disc %d from %c to %c\n",n,aux,source);
}
int main(void) {
				
    int n = 2;
    towerOfHanoi(n,'s','h','d');
	return 0;
}
