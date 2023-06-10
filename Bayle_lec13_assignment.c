// Aimee Rae F. Bayle
// 2022-06224
// Lecture 13 Assignment

#include <stdio.h>
#include <math.h>

// Structure named "line" to save the values input by the user
struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
    float *midpoint;
    float slope;
    float distance;
}line1;

// Function declarations
float solveSlope(struct line line1);
float *solveMidpoint(struct line line1);
float solveDistance(struct line line1);
void getSlopeInterceptForm(struct line line1);

void main(){
    // Prompts the user to enter the first point
    printf("Enter x and y for point1: ");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);

    // Prompts the user to enter the second point
    printf("Enter x and y for line2: ");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);

    // Displays the value of the slope by calling the solveSlope() function
    printf("Slope: %f\n", solveSlope(line1));
    
    // Calls the solveMidpoint() function and saves the values to the pointer midpoint which can be accessed like an array
    line1.midpoint = solveMidpoint(line1);
    printf("Midpoint: %f %f\n", (line1.midpoint[0]), (line1.midpoint[1]));
    
    // Displays the distance between the 2 points by calling the solveDistance() function
    printf("Distance between 2 points: %f\n", solveDistance(line1));

    // Calls the function that will solve and display the slope-intercept form
    getSlopeInterceptForm(line1);
}

// Defines the function that returns the slope
float solveSlope(struct line line1){
    line1.slope = (float)(line1.point1.y - line1.point2.y) / (line1.point1.x - line1.point2.x);
    return line1.slope;
}


// Defines the function that returns the midpoint between 2 points
float *solveMidpoint(struct line line1){
    static float midpoint[2];
    midpoint[0] = (line1.point1.x + line1.point2.x)/2;
    midpoint[1] = (line1.point1.y + line1.point2.y)/2;
    return midpoint;
}

// Defines the function that returns the distance between 2 points
float solveDistance(struct line line1){
    line1.distance = sqrt(pow((line1.point1.x - line1.point2.x), 2)+pow((line1.point1.y - line1.point2.y), 2));
    return line1.distance;
}

// Defines the function that displays the sloped-intercept form after solving for 
void getSlopeInterceptForm(struct line line1){
    float b;
    b = line1.point1.y - (line1.point1.x*solveSlope(line1));
    printf("y = %fx + %f\n", solveSlope(line1), b);
}