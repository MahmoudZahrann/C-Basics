#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i,j=9,x=0;
    while(j>=0)
    {
        for(i=x;i<=9;i++)
        {
            printf("%d ", i);
        }
        x++;
        printf("\n");
        j--;
    }
}
