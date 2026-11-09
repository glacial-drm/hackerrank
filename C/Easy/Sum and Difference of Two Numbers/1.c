// date - 2026/02/xx
// tags - math fstring input
// score - 15/15

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int i, j;
    float x, y;
    
    scanf("%d %d", &i, &j);
    scanf("%f %f", &x, &y);
    
    printf("%d %d\n", i+j, i-j);
    printf("%.1f %.1f\n", x+y, x-y);
    return 0;
}

