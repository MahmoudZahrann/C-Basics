#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
//practice break statement, write a code that is supposed to print numbers from 1 to 9 but stops at 7
    int i=1;
    do
    {
    printf("%d\n",i);
    i++;
    }
    while(i<=7);
    printf("---------------------------------\n");
//practice continue statement, write a code that prints numbers from 15 to 1 but skips 11, 6, and 5
    int j;
    for(j=15;j>=0;j--)
    {
        if(j==5||j==6||j==11)
        {
            printf("Skipping!\n");
            continue;
        }
        printf("%d\n",j);
    }
}
