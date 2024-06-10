#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a;
    scanf("%f", &a);
    int b = (int)a;
    int round_up= (int)ceil(a);
    int round_down= (int)floor(a);
    printf("%d\n%d\n%d", b, round_up, round_down);
    return 0;
}