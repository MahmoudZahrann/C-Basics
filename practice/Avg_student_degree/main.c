#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i=0, n;
    float sum=0, degree;
    printf("Enter the number of students: \n");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    /* SOLVING WITH FOR LOOP:
    for(i=0;i<n;i++)
    {
        printf("Enter the student's degree: \n");
        fflush(stdin); fflush(stdout);
        scanf("%f", &degree);
        sum += degree;
    }
    */
    while(i<n)
    {
        printf("Enter the student's degree: \n");
        scanf("%f", &degree);
        sum += degree;
        i++;
    }
    float avg = sum/n;
    printf("average degree = %f", avg);
}
