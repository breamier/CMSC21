#include <stdio.h>
#include <math.h> //includes the math library for the power function

int main(){
    //initializes the variables as an integer
    int i, n, power_of_2;

    //prompts the user to enter a value for n and stores it in the variable 'n'
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //prints the title and headers of the table
    printf("TABLE OF POWERS OF TWO\n");
    printf("n   2 to the n\n");
    printf("--  ----------\n");

    //solves and prints for the powers of two
    for(i=0; i<=n; i++){
        power_of_2 = pow(2,i);
        printf("%d      %d\n", i, power_of_2);
    }
}