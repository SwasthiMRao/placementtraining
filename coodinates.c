#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x1, x2, y1, y2;
    float x, y;
    scanf("%d\n%d\n%d\n%d\n", &x1, &y1, &x2, &y2);
    x= (float)(x1+x2)/2;
    y= (float)(y1+y2)/2;
    printf("Arun's house is located at(%.1f,%.1f)", x, y);
    return 0;
}
