#include <stdio.h>
#include <stdlib.h>
// To print the reverse of an array


int main() {
	int arr[50],terms,reversedArr[50];
    printf("Enter the number of terms");
    scanf("%d",&terms);
    for (int i = 0;i<terms;i++){
        printf("Enter the element %d",i);
        scanf("%d",&arr[i]);
    }
    printf("array before the reversal");		
    for(int i = 0;i<terms;i++){
        printf("%d,",arr[i]);
    }

    // Reversing the array
    for(int i =0;i<terms;i++){
        reversedArr[i]=arr[terms-1-i];
    }
    printf("\nArray after the reversal");
    for(int i=0;i<terms;i++){
        printf("%d,",reversedArr[i]);
    }
    
	return 0;
}