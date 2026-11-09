// tags - bitwise function input math limits
// date - 2026/02/xx
// score - 11.54/15
// error - incorrect

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    // nested loop to get comparison digits
        // perform operations in inner loop
        // add to counter if condition met, for each bitwise operator
    // output based on max less than k
    
    int i, j;
    int and, or, xor;
    int max_and = INT_MIN, max_or = INT_MIN, max_xor = INT_MIN;
    
    for(i = 1; i <= n; i++){
        for(j = i+1; j <= n; j++){
            and = i & j;
            or = i | j;
            xor = i ^ j;
            
            if(and>max_and && and < k){
                max_and = and;
            }
            if(or >max_or && or < k){
                max_or = or;
            }
            if(xor>max_xor && xor < k){
                max_xor = xor;
            }
        }
    }
    
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

