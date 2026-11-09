// date - 2026/02/xx
// tags - string math
// score - 10/10

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char* int_arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int i;
    for(i = a; i<=b; i++){
        
        if(i >= 1 && i < 10){
            printf("%s\n", int_arr[i]);
        }
        else if(i >= 10){
            if(i%2){
                printf("odd\n");
            }
            else{
                printf("even\n");
            }
        }
    }


    return 0;
}
