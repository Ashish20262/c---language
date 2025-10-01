#include<stdio.h>

int main()
{
    int c = 11;
    // c ++;
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= i; j++){
            printf(" %d",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}