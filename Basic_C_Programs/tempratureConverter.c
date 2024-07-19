// The program converts the temprature in fahrenheit to celsius using formula

#include<stdio.h>
#define lowLmt 0
#define upLmt 250

int main(){
    float temp = 0,celsius;
    while(temp<= upLmt){
        celsius = (temp-32)/1.8;
        printf("%5.1f %7.5f \t\n",temp,celsius);
        temp= temp+25;
    }
    return 0;

}