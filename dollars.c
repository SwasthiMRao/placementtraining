#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int d1, d2, c1, c2, D, C, Cd, Cm;
    scanf("%d\n%d\n%d\n%d\n",&d1, &c1, &d2, &c2);
    C= c1+c2;
    Cm=C/100;
    Cd= C%100;
    D= d1+d2+Cm;
    printf("%d\n%d", D, Cd);
    return 0;
}