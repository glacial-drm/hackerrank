// tags - regex string dynamic-alloc ascii
// date - 2026/02/xx
// score - 25/25

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c[1000];
    int i = 0, ctoi =  0, *arr;
    
    
    scanf("%[^\n]*%c", &c);
    
    arr = calloc(10, sizeof(int));
    while(c[i] != '\0'){
        ctoi = c[i]-48;
        if(0 <= ctoi && ctoi <= 9){
            arr[ctoi]++;
            // #printf("%c\n", c[i]);    
        }
        
        i++;
    }
    
    for(i = 0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
