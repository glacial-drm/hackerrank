// tags - array string input pointer-arithmetic
// date - 2026/02/xx
// score - 10/10i

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int len, *arr, j;
    int i, sum = 0;
    
    scanf("%d", &len);
    arr = (int*) malloc(sizeof(int)*len);
    
    for(j = 0; j < len; j++){
        scanf("%d", arr + j);    
    }
    
    for(i = 0; i < len; i++){        
        sum += arr[i];
    }
    printf("%d\n", sum);
    
    return 0;
}
