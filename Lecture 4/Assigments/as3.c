#include <stdio.h>

int main(void){
    //initializes the variable 'i'
    int i;

    //for loop that solves for the integer
    for(i=1; i<=128; i*=2){
        
        //prints the result
        printf("%d", i);
    }
    return 0;
}
//The output of this program is 1248163264128