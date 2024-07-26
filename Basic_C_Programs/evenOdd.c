// Count number of even and odd elements in an array
#include<stdio.h>
int main (){
    int arr[20];
    int count=0,value,even[20],odd[20],evenCount=0,oddCount=0;
    printf("enter the number of values");
    scanf("%d",&value);
    for(count=0;count<value;count++){
        printf("enter the number");
        scanf("%d",&arr[count]);
        if(arr[count]%2==0){
            even[evenCount++]=arr[count];
            
        }
        else{
            odd[oddCount++]=arr[count];
        }
        
    }
    printf("all values:");
    for(count=0;count<value;count++){
        printf("%d\'",arr[count]);
    }
    printf("\neven values:");
    value=evenCount;
    for(count=0;count<value;count++){
        printf("%d\'",even[count]);
    }
    printf("\nodd valuess:");
    value=oddCount;
    for(count=0;count<value;count++){
        printf("%d\'",odd[count]);
    }
    

}