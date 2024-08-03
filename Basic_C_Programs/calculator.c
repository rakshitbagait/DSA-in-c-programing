#include<stdio.h>
float add(float a, float b){
    float ans = a+b;
    printf("The answer is %.3f",ans);

}
float sub(float a, float b){
    float ans = a-b;
    printf("The answer is %.3f",ans);
    
}
float mul(float a, float b){
    float ans = a*b;
    printf("The answer is %.3f",ans);
    
}
float div(float a, float b){
    if(b!=0){
        float ans =a/b;
        printf("The answer is %.3d");

    }
    else{
        printf("Error!!");

    }
}
int main(){
    float num1,num2;
    printf("Welocme to calculator\n");
    int choice;
    while(1){
        printf("enter 2 numbers");
        scanf("%f%f",&num1,&num2);
        printf("Enter 1 for addition\n");
        printf("Enter 2 for subtraction\n");
        printf("Enter 3 for multiplication\n");
        printf("Enter 4 for division\n");
        printf("Enter 5 for Exit\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        if(choice ==1){
            return add(num1,num2);
        }
        else if (choice==2){
            return sub(num1,num2);
        }
        else if (choice==3){
            return mul(num1,num2);
        }
        else if (choice==4){
            return div(num1,num2);
        }
        else{
            printf("Good Bye");
            break;
        }

        
    }
    return 0;
}