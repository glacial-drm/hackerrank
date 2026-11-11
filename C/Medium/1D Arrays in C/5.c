// tags - array string input tokenise typecast regex static-alloc
// date - 2026/02/xx
// score - 6.25/10
// error - segmentation-fault

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int len;
    scanf("%d", &len);
    if(len == NULL){
        return 0;
    }
    scanf("\n");
    
    char arr[1000];
    scanf("%[^\n]%*c", arr);
    if(arr == NULL){
        return 0;
    }
    
    int i;
    long int sum = 0;
    char* arr_tok = strtok(arr, " ");
    //while(arr_tok != NULL){
    for(i = 0; i < len; i++){        
        sum += atoi(arr_tok);
        arr_tok = strtok(NULL, " ");
    }
    
    printf("%ld\n", sum);
    
    
    return 0;
}
