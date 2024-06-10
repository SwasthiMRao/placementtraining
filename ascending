#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int size, num[100], i;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for(i = 0; i<(size-1); i++)
    {
        int minindex=i;
        for(int j=i+1; j<size; j++)
        {
            if(num[j]< num[minindex])
            {
                minindex=j;
            }
        }
        if(i != minindex)
        {
            swap(&num[i],&num[minindex]);
        }
    }
    printf("The Sorted array is:\n");
    for(i=0; i<size; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}
