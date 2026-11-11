// tags - math
// date - 2026/10/18
// score - 30/30

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    // mirror based on the center
    // do so without using cases/conditions
    // meaning we have to manipulate the nums themselves
    
    // keep a lower bound that decreases each outer iteration
        // naturally also keep an upper bound. this is, instead, fixed at the input value
        
        /// keep some flag to see if we have reached center
            /// if not, subtract from num | else add to num
                /// before we subtract, check: if we are at lower bound
                /// before we add to num, check: if we are at upper bound
                    // need to make sure we don't instantly add and cap at upper bound --------------
                        // we don't want to start adding until we are the appropriate number of spaces away from the upper bound
                        
                        /// if dist between current pos and end of row is <= diff between current num and upper bound then don't addd

    int num;
    scanf("%d", &num);
    
    int dim = 2*num - 1;
    int center = dim/2;
    
    int row, col;
    int upperBound = num, lowerBound = num;
    for(row = 0; row < dim; row++){
        
        num = upperBound;
        
        for(col = 0; col < dim; col++){
            
            printf("%d ", num);
            
            if(col < center){ if (num > lowerBound) num--; }
            else{ if((dim-1) - col <= upperBound - num) num++; }
        }
        printf("\n");

        if (row < center) lowerBound--;
        else lowerBound++;
    }

    return 0;
}

