// tags - input tokenise alloc string regex dynamic-alloc
// date - 2026/02/xx
// score - 20/20

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char* s_tok = strtok(s, " ");
    
    while(s_tok){
        printf("%s\n",s_tok);
        s_tok = strtok(NULL, " ");
    }
    return 0;
}
