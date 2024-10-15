/* The following program is written in c to make differrent fuctiions 
of set theory like 
Union 
Intersection
Subset
Superset
*/

#include <stdio.h>
#include <stdlib.h>

int UnionSet(int arr[50],int arr2[50],int set1_size,int set2_size);
// int  IntersectionSet(int arr[50], int arr2[50]);
// int  subset(int arr[50],int arr2[50]);
// int  superset(int arr[50],int arr2[50]);


int main(void) {
    int set1[50],set2[50];
    int terms,terms2;
    printf("Enter the number of terms in set1");
    scanf("%d",&terms);
    for(int i=0;i<terms;i++){
        printf("Enter the element%d",i+1);
        scanf("%d",&set1[i]);

    }
    printf("Enter the number of terms in set2");
    scanf("%d",&terms2);
    for(int i=0;i<terms2;i++){
        printf("Enter the element%d",i+1);
        scanf("%d",&set2[i]);
        
    }
    printf("The set 1 is:\n");
    printf("{");

    for(int i=0; i<terms;i++){
        printf("%d,",set1[i]);

    }printf("}\n");
    printf("The set 2 is:");
    printf("{");
    for(int i=0;i<terms2;i++){
        printf("%d,",set2[i]);
    }printf("}\n");
    UnionSet(set1,set2,terms,terms2);
    // IntersectionSet(set1[50],set2[50]);
    // subset(set1[50],set2[50]);
    // superset(set1[50],set2[50]);

return 0;
}

int UnionSet(int arr[],int arr2[],int set1_size,int set2_size){
    int uSet[50],size; 
    int max=(set1_size>=set2_size)?set1_size:set2_size;
    int j=0;
    // Loop to fill the element of set A in Union Set
    int element=arr2[0];
    for(int i =0;i<set1_size;i++){
        uSet[i]=arr[i];
    }
    
    size =sizeof(uSet)/sizeof(uSet[0]);
    printf("the union of the set 1 and 2 is: {");
    for(int i=0;i<size;i++){
        printf("%d,",uSet[i]);
    }printf("}");   
}