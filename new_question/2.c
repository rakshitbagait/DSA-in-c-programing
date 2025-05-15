#include <stdio.h>
#include <stdlib.h>
struct Person
{
    char name[50];
    int age;
    float height;
    float weight;

};

int sort_by_age(struct Person people[],int n )
{
    // using quick sort
    struct Person temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (people[j].age > people[j + 1].age) {
                
                temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }
    return 0;
}
int display(struct Person people[],int n )
{
    printf("The list of person by age is\n ");
    printf("\nName|\tAge|\tWeight|\tHeight");
    for (int i =0 ; i<n;i++)
    {
        printf("\n%s|\t%d|\t%0.2f|\t%0.2f",people[i].name,people[i].age,people[i].weight,people[i].height);

    }
    return 0;
}

int main(void) 

{
    int n ;
    printf("Enter the number of people");
    scanf("%d",&n);
    struct Person people[n];
    for(int i =0; i<n;i++)
    {
        printf("\n Enter name of person %d",i+1);
        scanf("%s[^\n]",people[i].name);
        printf("\nEnter the height of  person in cm");
        scanf("%f",&people[i].height);
        printf("\nEnter the weight of  person kg");
        scanf("%f",&people[i].weight);

        printf("\nEnter the age of  person");
        scanf("%d",&people[i].age);
        
    }
    sort_by_age(people,n);
    display(people,n);
	return 0;
}