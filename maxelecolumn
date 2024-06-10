#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int m, n, i, j, a[20][20];
    int maxele[100] = {};
    scanf("%d\n%d", &m, &n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d\t", &a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
             if(a[i][j] > maxele[j])
             {
                maxele[j] = a[i][j]; 
             }
        } 
    }
    for(int j=0;  j< n; j++) 
    {
        printf("%d\n",maxele[j]);
    }
    return 0;
}
