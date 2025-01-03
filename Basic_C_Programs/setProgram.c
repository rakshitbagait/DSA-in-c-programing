/* The following program is written in c to make differrent fuctiions 
of set theory like 
Union 
Intersection
Subset
Superset
*/

#include <stdio.h>
#include <stdlib.h>

int UnionSet(int arr[],int arr2[],int set1_size,int set2_size);
int  IntersectionSet(int arr[], int arr2[],int set1_size,int set2_size);
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
    IntersectionSet(set1,set2,terms,terms2);
    // subset(set1[50],set2[50]);
    // superset(set1[50],set2[50]);

return 0;
}

int UnionSet(int arr[],int arr2[],int set1_size,int set2_size){
    int uSet[50],size; 
    int max=(set1_size>=set2_size)?set1_size:set2_size;

    // Loop to fill the element of set A in Union Set
    for( int i=0 ;i<set1_size;i++){
        uSet[i]=arr[i];
    }
   
    // Loop to fill the elemet of setB in union Set 
    for(int i=0;i<set2_size;i++){
        uSet[i+set1_size]=arr2[i];
    } 
    size =set1_size+set2_size;
    
    // Loop to delete the duplicate elemets 
    for ( int i = 0; i < size; i ++)  
    {  
        for ( int j = i + 1; j < size; j++)  
        {  
            // use if statement to check duplicate element  
            if ( uSet[i] == uSet[j])  
            {  
                // delete the current position of the duplicate element  
                for ( int k = j; k < size - 1; k++)  
                {  
                    uSet[k] = uSet[k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
 
    printf("the union of the set 1 and 2 is: {");
    for(int i=0;i<size;i++){
        printf("%d,",uSet[i]);
    }printf("}");   
}
int IntersectionSet(int arr[],int arr2[],int set1_size, int set2_size){
    // Intersection of two set means that only the common eleements are kept else all the other element are deleted
    int iSet[50],size= set1_size+set2_size;
    for(int i=0;i<set1_size;i++){
        iSet[i]=arr[i];
    }
    for(int i=0;i<set2_size;i++){
        iSet[i+set2_size]=arr2[i];
    }
    for ( int i = 0; i < size; i ++)  
    {  
        for ( int j = i + 1; j < size; j++)  
        {  
            // use if statement to check duplicate element  
            if ( iSet[i] != iSet[j])  
            {  
                // delete the current position of the duplicate element  
                for ( int k = j; k < size - 1; k++)  
                {  
                    iSet[k] = iSet[k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }
    for(int i=0;i<size;i++){
        printf("%d",iSet[i]);

    }  
}