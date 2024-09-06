#include <stdio.h>

int quadrantOfPoint(int x, int y){
    if (x == 0 && y != 0){
        
        return -2;
    }
    else if (y == 0 && x !=0){
        
        return -1;
    }
    else if (x == 0 && y ==0){
        
        return 0;
    }
    else if (x > 0 && y > 0){
        printf("The point (%d, %d) is in quadrant 1.\n", x, y);
        return 1;
    }
    else if (x > 0 && y < 0){
        printf("The point (%d, %d) is in quadrant 4.\n", x, y);
        return 4;
    }
    else if (x < 0 && y > 0){
        printf("The point (%d, %d) is in quadrant 2.\n", x, y);
        return 2;
    }
    else if (x < 0 && y < 0){
        printf("The point (%d, %d) is in quadrant 3.\n", x, y);
        return 3;
    }
    return 0;
}