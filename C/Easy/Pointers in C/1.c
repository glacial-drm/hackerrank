// date - 2026/02/xx
// tags - pointer-arithmetic input
// score - 10/10

#include <stdio.h>

void update(int* a,int* b) {
    // Complete this function    
    int x = *a;
    
    *a = *a + *b;
    *b = abs(x - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
