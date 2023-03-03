#include <stdio.h> //this line is processed by the preprocessor before compilation and includes the standard library 'stdio.h'

/*creates a 'void' main function that does not receive information
and it also indicates that the main function returns an integer value*/
int main(void)
{
    //declares the variables as integers
    int num1, denom1, num2, denom2, result_num, result_denom;   

    printf("Enter first fraction: ");   //prompts the user to input the first fraction
    scanf("%d/%d", &num1, &denom1);     //takes the input from the user and stores it in the variables num1 and denom1

    printf("Enter second fraction: ");  //prompts the user to input the second fraction
    scanf("%d/%d", &num2, &denom2);     //takes the input from the user and stores it in the variables num2 and denom2

    //adds the products between the 2 numerators and denominators and stores it in the variable result_num
    result_num = num1 * denom2 + num2 * denom1; 

    //multiplies the 2 denominators and stores the value in the variable result_denom
    result_denom = denom1 * denom2;             

    //takes 2 arguments and displays the result
    printf("The sum is %d/%d\n", result_num, result_denom); 

    return 0; 
}