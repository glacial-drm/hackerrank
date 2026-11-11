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
    scanf("\n");
    
    char arr[1000];
    scanf("%[^\n]%*c", arr);
    char* arr_tok = strtok(arr, " ");
    
    int i, sum = 0;
    while(arr_tok != NULL){
        sum += atoi(arr_tok);
        arr_tok = strtok(NULL, " ");
    }
    
    printf("%d\n", sum);
    
    
    return 0;
}

