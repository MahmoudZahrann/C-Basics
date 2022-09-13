#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
/*
EX1:

Write C Program to Print a Sentence
i should see the Console as following:
##########Console-output###
C Programming
*/
printf("C Programming\n");
printf("\n");
//_______________________________________________________________
/*
EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
*/
int x_2;
printf("Enter an integer: ");
fflush(stdin); fflush(stdout);
scanf("%d",&x_2);
printf("You entered: %d", x_2);
printf("\n");
//_______________________________________________________________
/*
EX3:

Write C Program to Add Two Integers
i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
*/
int x_3, y_3;
printf("\nEnter two integers: ");
fflush(stdin); fflush(stdout);
scanf("%d %d",&x_3, &y_3);
int sum = x_3+y_3;
printf("sum: %d", sum);
printf("\n");
//_______________________________________________________________
/*
EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###
Enter two numbers: 2.4
1.1
Product: 2.640000
*/
float x_4,y_4,product;
printf("\nEnter two numbers: ");
fflush(stdin); fflush(stdout);
scanf("%f %f",&x_4, &y_4);
product = x_4 * y_4;
printf("product: %f", product);
printf("\n");
//_______________________________________________________________
/*
EX5:

Write C Program to Find ASCII Value of a Character
#########Console_output######
Enter a character: G
ASCII value of G = 71
*/
int x_5;
char X_5;
printf("\nEnter a character: ");
fflush(stdin); fflush(stdout);
scanf("%c", &X_5);
x_5=X_5;
printf("ASCII value of %c = %d",X_5,x_5);
printf("\n");
//_______________________________________________________________
/*
EX6:

Write Source Code to Swap Two Numbers
#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
*/
float a_6,b_6,x_6;
printf("\nEnter value of a: ");
fflush(stdin); fflush(stdout);
scanf("%f", &a_6);
printf("\nEnter value of b: ");
fflush(stdin); fflush(stdout);
scanf("%f", &b_6);
x_6=a_6;
a_6=b_6;
b_6=x_6;
printf("After swapping, value of a = %f\n", a_6);
printf("After swapping, value of b = %f\n", b_6);
printf("\n");
//_______________________________________________________________
/*
EX7:
it is an interview trick
Write Source Code to Swap Two Numbers without temp variable.
*/
float x_7,y_7;
printf("\nEnter value of x: ");
fflush(stdin); fflush(stdout);
scanf("%f", &x_7);
printf("\nEnter value of y: ");
fflush(stdin); fflush(stdout);
scanf("%f", &y_7);
x_7 = x_7 + y_7;
y_7 = x_7 - y_7;
x_7 = x_7 - y_7;
printf("After swapping, value of x = %f\n", x_7);
printf("After swapping, value of y = %f\n", y_7);
}
