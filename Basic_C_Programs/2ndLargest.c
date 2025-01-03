#include<stdio.h>
// void sort(int arr[]);
int main(){
    int arr[]={13,4,24,24,53,65,65,43,34,324,52,5234,645,5234,5234,5234};
    int size = sizeof(arr)/sizeof(arr[0]);

        for (int i = 0; i < size; i++)
        {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }  
        }
        
    } 
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    // The largest number is 
    for(int i =0;i<size;i++){
        if(arr[size-1]>arr[size-2])
        {
            printf("\nthe second largest number is:%d",arr[size-2]);
            break;
        }
        else
        {
            size -=1;
        }

    }



}

