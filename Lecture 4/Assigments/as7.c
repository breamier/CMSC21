#include <stdio.h>

//macro to define the size of 2d array
#define N 8
#define M 8

int main(void){
    //initializes the adjacency matrix and point
    int road_networks[N][M]={
        {1,1,1,0,0,1},{1,1,1},
        {0,1,1,0,1,1},{0,0,0,1,1},
        {0,0,0,1,1},{1,0,1,0,0,1},
        {1,0,0,1,0,0,1},{0,0,0,0,0,1,0,1}
    };
    int point;

    //asks the user about the location and stores it as the value of 'point'
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &point);

    //switch statement to print the designated point
    switch(point){
        case 0: printf("At point: A\n"); break;
        case 1: printf("At point: B\n"); break;
        case 2: printf("At point: C\n"); break;
        case 3: printf("At point: D\n"); break;
        case 4: printf("At point: E\n"); break;
        case 5: printf("At point: F\n"); break;
        case 6: printf("At point: G\n"); break;
        case 7: printf("At point: H\n"); break;
        default: break;
    }

    //determines the nearest charging station to the location provided by the user
    if(point==2){
        printf("C is a charging station");
    }
    else if(point==3){
        printf("D is a charging station");
    }
    else{
        if(road_networks[point][2]==0 && road_networks[point][3]==0){
            printf("There is no charging station nearby");
        }
        else if(road_networks[point][2]==1){
            printf("C arrived to charging station");
        }
        else if(road_networks[point][3]==1){
            printf("D arrived to charging station");
        }
        else{
            printf("The point does not exist");
        }
    }

}
