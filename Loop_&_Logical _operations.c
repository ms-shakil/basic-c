// while loops example
#include<stdio.h>
int main()
{
    int number = 10,i =0;
    while (i<number)
    {
        printf("%d\n",i+1);
        i+=1;
    }
}

// for loops
int main()
{
    int num = 10 ,j;
    for(j=1;j<num+1;j++){
       printf("%d\n",j);
}
}
// Using for loop and conditons
#include<stdio.h>
int main (){
    int num ;
    printf ("Please Enther the number :\n");
    scanf("%d",&num);
    for (int i = 1 ;i <=num;i++){
        if (i% 3 == 0 && i %5 == 0 ){
            printf("Fizzbuzz \n");
        }
        else if(i % 3 == 0 ){
            printf("Fizz \n");
        }
        else if (i % 5 == 0){
            printf("Buzz \n");
        }
        else {
            printf("This is wrong number \n");
        }
    }
}



/// Use While loop and condition

#include<stdio.h>
int main (){
    int num1 , i=1;
    printf("Enter the number:\n");
    scanf("%d", &num1);
    while (i <=num1 )
    {
             if (i% 3 == 0 && i %5 == 0 ){
            printf("Fizzbuzz \n");
        }
        else if(i % 3 == 0 ){
            printf("Fizz \n");
        }
        else if (i % 5 == 0){
            printf("Buzz \n");
        }
        else {
            printf("This is wrong number \n");
        }
        i+=1;
    }
    
}

