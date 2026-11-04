// date - 2026/02/xx
// tags - function input

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    
    int x = max(a, b);
    int y = max(x, c);
    int z = max(y, d);
    
    return z;
}

int max(int x, int y){
    if(x > y){
        return x;
    }
    else if(x < y){
        return y;
    }
    return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

