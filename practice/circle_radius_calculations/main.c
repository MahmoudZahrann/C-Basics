#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char choice;
	float radius;
	float area, circumference;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);
	printf("\nEnter your choice (a for area, c for circumference): ");
	fflush(stdin); fflush(stdout);
    scanf("%c", &choice);
    switch(choice)
    {
        case 'a':
            {
                area= 3.14159 * radius * radius;
                printf("\nThe area is : %f", area);
            }
        break;

        case 'c':
            {
                circumference= 3.14159 * 2 * radius;
                printf("\nThe circumference is : %f", circumference);
            }
        break;

        default:
            {
                printf("\nwrong choice!");
            }
    }

}
