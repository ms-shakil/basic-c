// Data type
/*
     Type                	Size (bytes)	                 Format Specifier
     '
     int	          at least 2, usually 4	                  %d, %i

     char	               1	                                      %c

    float	               4	                                     %f

    double	             8	                                      %lf
*/


// ANSI C provides three types of data types:

/*
 1. Primary(Built-in) Data Types:
   int, char, double and float.

 3. Derived Data Types:
     Array, References, and Pointers.

  .  User Defined Data Types:
    Structure, Union, and Enumeration.
*/

# include<stdio.h>
int main(){
  int number ;     //variable  declaration 
  float number2 = 3.3;   // variable initalization
  double number3 = 3.334343434;
  char ch ='a';
  printf("number  is  %d \n",number);
  printf("charter is  %c \n",ch);
  printf("double number is %lf",number3);
  printf("float number is %f",number2);
}