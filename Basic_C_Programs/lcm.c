#include <stdio.h>
#include <stdlib.h>
int main(void) {
     int x,y ,i=2;
     printf("enter the 2 number for lcm");
     scanf("%d %d",&x,&y);
          while(1)
          {
          if(i%x==0&&i%y==0){
               printf("the answer is: %d",i);
               break;
          }
          else ++i;
          }
          return 0;
     }