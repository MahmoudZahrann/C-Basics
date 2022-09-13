#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int x, y, i;
    printf("Calculate the sum from 1 to ... :\n");
    fflush(stdin); fflush(stdout);
    scanf("%d", &x);
    for(i=1;i<=x;i++)
    {
    y += i;
    }
    printf("\nsum = %d ", y);
}
