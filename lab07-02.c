/**
* ===========================================================
*    Name: Adsit
* Section:
* Project: 
* Purpose: 
* ===========================================================
*/
#include <stdio.h>
#include "lab07-02functs.h"
int main(void) {
    int xval = 0;
    int yval = 0;
   printf("Enter the x and y values of a points: ");
   scanf("%d %d", &xval, &yval);
   
   quadrantOfPoint(xval, yval);
   if (quadrantOfPoint(xval, yval) == ON_Y_AXIS){
    printf("The point(%d, %d) is on the Y-axis.\n", xval, yval);
   }
   else if (quadrantOfPoint(xval, yval) == ON_X_AXIS){
printf("The point (%d, %d) is on the X-axis.\n", xval, yval);
   }
   else if (quadrantOfPoint(xval, yval) == ON_ORIGIN){
printf("The point (%d, %d) is on the origin.\n", xval, yval);
   }
    return 0;
}