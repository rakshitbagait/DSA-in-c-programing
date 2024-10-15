#include <stdio.h>
#include <stdlib.h>
// 

int main(void) {
	int arr[10]={1,1,2,3,4,5,5,6,6};
    int result[]={};
    int size=sizeof(arr)/sizeof(arr[0]);
    int duplicate=arr[1];
    int j=0;
	for(int i=0;i<size;i++){
            if(arr[i]==arr[i+1]){
                duplicate+1;
                }
            
            else{
                 result[i]=arr[i+1];
                 j++;
            }
        }
    
    for(int i=0;i<j;i++){
        printf("%d,",result[i]);
    }	
	return 0;

}