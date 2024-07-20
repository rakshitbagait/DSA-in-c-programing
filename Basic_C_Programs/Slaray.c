// A computer manufacturing company has the following monthly compensation policy to their sales-persons
/*Base salay :15000
bonus for every computer sold : 200
commison on the total monthly sale : 2%*/

#include<stdio.h>
int main(){
    const int salary = 15000;
    const int bonus = 200;
    const int commission =0.02;
    const float price = 10000;

    float computersale,monthlysale;
    printf("Enter the number of computer sold");
    scanf("%f\n",&computersale);
    monthlysale = price*computersale;
    float grossSalary = salary+(bonus*computersale)+(monthlysale*commission);
    printf("the monthly salary of the salesman is : %f",grossSalary);
    return 0;
    
}