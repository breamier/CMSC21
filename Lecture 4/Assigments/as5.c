#include <stdio.h>

int main(void){
    //initializes the variables to be used
    int days=0, i, j, starting_day=0;

    //while-loop that checks and stores the input for the number of days
    while(days<=0 || days>=32 || days<=27){
        printf("Enter number of days in month: ");
        scanf("%d", &days);
    }

    /*  while-loop that checks and stores the input for the
    day of the week on which the month begins    */
    while(starting_day<=0 || starting_day>=8){
        printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
        scanf("%d", &starting_day);
    }
    
    //prints the spaces before the starting day
    for(j=1; j<starting_day; j++){
        printf("   ");
    }

    //prints the days of the month per week
    for(i=1; i<=days; i++){
        printf("%3d", i);
        if((starting_day+i-1)%7==0){
            printf("\n");
        }
    }

    return 0;
}