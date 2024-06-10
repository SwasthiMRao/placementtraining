#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, y, coins;
    int benshare, blackshare, pirateshare;
    scanf("%d\n%d\n%d\n", &coins, &x, &y);
    benshare= coins*x/100;
    blackshare= (coins-benshare)*y/100;
    pirateshare= (coins-benshare-blackshare)/3;
    printf("%d\n%d\n%d", benshare, blackshare, pirateshare);
    return 0;
}