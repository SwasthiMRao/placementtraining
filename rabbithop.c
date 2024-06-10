#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, y, hop;
    scanf("%d\n%d", &x, &y);
    hop= sqrt(pow(x-3,2) + pow(y-4,2));
    printf("%d", hop);
    return 0;
}