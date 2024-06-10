#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, i, sumeven =0, sumodd=0;
    int a[15];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
        for(i=0; i<n; i++)
        {
            if(a[i] % 2 == 0){
               sumeven += a[i];
            }
            else {
                sumodd += a[i];
            }
        }
        printf("The sum of the even numbers in the array is %d", sumeven);
        printf("\nThe sum of the odd numbers in the array is %d", sumodd);
    return 0;
}