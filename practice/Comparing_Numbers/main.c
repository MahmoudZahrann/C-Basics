#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a, b, c;
    printf("Enter 3 numbers: \n");
    fflush(stdin); fflush(stdout);
    scanf("%d %d %d", &a, &b, &c);
    if(a>b&&a>c)
    {
            printf("The highest number is: %d", a);
    }
    if(b>c&&b>c)
    {
            printf("The highest number is: %d", b);
    }
    if(c>b&&c>a)
    {
            printf("The highest number is: %d", c);
    }

    //What if we want to compare more the 3 integers. a number of integers that the user requests ?

    int length;
    printf("\nHow many numbers do you want to compare?");
    fflush(stdin); fflush(stdout);
    scanf("%d", &length);

    int array[length];
    int x;
    for(int i = 0; i < length; i++ )
    {
        printf("The numbers are to be entered as array elements.\n");
        printf("array[%d]=", i);
        fflush(stdin); fflush(stdout);
        scanf("%d", &array[i]);
    }
    x = array[0];

    for(int i = 0; i < length; i++ )
    {
        if(x<array[i])
        {
            x=array[i];
        }
    }
    printf("The largest number is %d", x);
}
