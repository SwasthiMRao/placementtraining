#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    scanf("%s", &ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u')
            printf("Vowel");
        else
            printf("Consonant");
    }
    else
        printf("Not an alphabet");
    return 0;
}