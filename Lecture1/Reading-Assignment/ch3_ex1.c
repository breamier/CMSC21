#include <stdio.h>      //includes the standard input output library

/*creates a 'void' main function that takes no argument
and it also indicates that the main function returns an integer value*/
int main(void) { 

int i, j;		//declares the variables i and j as integers
float x, y;		//declares the variables x and y as numbers with decimals

i = 10;			//assigns the value of 10 to the variable 'i'
j = 20;         //assigns the value of 20 to the variable 'j'
x = 43.2892f;   //assigns the value of 43.2892 to the variable 'x'
y = 5527.0f;    //assigns the value of 5527.0 to the variable 'y'

// takes 4 arguments and displays the values for each variable
printf("i = %d, j= %d, x = %f, y = %f\n", i, j, x, y); 
// %d displays an integer value
// %f displays a float value

}
