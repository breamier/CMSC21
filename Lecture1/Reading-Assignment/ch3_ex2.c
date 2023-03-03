#include <stdio.h>  //includes the standard input output library

/*creates a 'void' main function that takes no argument
and it also indicates that the main function returns an integer value*/
int main(void)
{
    int i;      //declares the variable i as an integer
    float x;    //declares the variable x as a number with decimals

    i = 40;         //assigns the value of 40 to the variable 'i'
    x = 839.21f;    //assigns the value of 839.21 to the variable 'x'

    //prints the integers and floating numbers 
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|10.3f|%10.3e|%-10g|\n", x, x, x);
    // %d displays an integer value
    // %f displays a floating-point value
    // %e displays a floating-point value in exponential form
    // %g displays a floating-point value in exponential or fixed decimal form

    return 0;
}