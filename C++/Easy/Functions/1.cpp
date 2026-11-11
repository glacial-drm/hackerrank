// tags - input functiono
// date - 2026/02/xx
// score - 10/10

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max(int a, int b){ // Ignores equality
    if(a > b){
        return a;
    } 
    return b;
}

int max_of_four(int a, int b, int c, int d){
    int i;
    i = max(a, b);
    i = max(i, c);
    
    return max(i, d);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
