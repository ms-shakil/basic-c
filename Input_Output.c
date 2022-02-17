// How to take input and print output

#include<stdio.h>
int main(){
    int num1,num2;
    double num3,num4;
    // printf("Enter the first number:\n");
    // scanf("%d",&num1);
    // printf("Enter the second number:\n");
    // scanf("%d",&num2);
    // printf("This number are %d and %d",num1,num2);

    printf("Enter two double numbers:\n");
    scanf("%lf %lf",&num3,&num4);
    printf("This two double number are %lf and %lf",num3,num4);
}
