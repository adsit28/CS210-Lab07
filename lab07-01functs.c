#include <stdio.h>

int displayResidenceHall(int squad){
    if (squad > 40 || squad < 1){
        printf("No such squadron exists (%d).", squad);
        return 1;    
    }

    else if(squad > 23 && squad < 41){
        printf("Squadron %d is in Sijan.\n", squad);
        return 0;
    }
    else if (squad > 0 && squad < 24){
        printf("Squadron %d is in Vandy.\n", squad);
        return 0;
    }
    return 0;
}