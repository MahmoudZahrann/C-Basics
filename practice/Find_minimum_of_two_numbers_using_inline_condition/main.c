#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a, b;
    printf("Enter two numbers:\n");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &a, &b);
    printf("The minimum is %d", (a<b)?a:b); // '(a<b)?a:b' is the inline condition.
}
