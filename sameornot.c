#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 100000

int main() {
    int a[MAX_SIZE], b[MAX_SIZE];  //name of two arrrays
    int sizea, sizeb, i, j;
    int sum1=0, sum2=0;
    scanf("%d%d", &sizea, &sizeb);
    for(i=0; i<sizea; i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=0; j<sizeb; j++)
    {
        scanf("%d", &b[j]);
    }
    for(i=0; i<sizea; i++)
    {
     sum1 += a[i];
    }
    for(j=0; j<sizeb; j++)
    {
     sum2 += b[j];
    }
    if(sum1==sum2 && sizea==sizeb)
        printf("Same");
    else
        printf("Not Same");
    return 0;
}