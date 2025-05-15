#include <stdio.h>
#include <stdlib.h>

struct Vehicle
{
   char model_name[100];
   int year;
   float mileage;
}

int max_efficiency(struct Vehicle ptr[],int n)
{
    float max = ptr->mileage[0] ;
    for(int i =0;i<n;i++)
    {
        if(ptr->mileage[i]<ptr->mileage[i++])
        {
            max=ptr->mileage[i++];

        }

    }
    printf("%d",max);
    return 0;
}
int main(void)
{
   
	int n;
    struct Vehicle ptr[n];
    printf("ENter the number of vehicles :");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        printf("ENTer the model name");
        scanf("%s",&ptr[i].model_name);
        printf("Enter the year of vehicle:");
        scanf("%d",&ptr[i].year);
        printf("Enter the mileage of vehicle");
        scanf("%f",&ptr[i].mileage);

    }
    max_efficiency(ptr,n);
	return 0;
}