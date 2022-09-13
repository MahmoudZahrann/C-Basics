#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
EX1: Write C Program to Check Whether a Number is Even or Odd
*/
int i;
printf("Enter an integer you want to check: ");
fflush(stdin); fflush(stdout);
scanf("%d", &i);
if(i%2==0)
    {
        printf("%d is Even.", i);
    }
else if(i%2==1)
    {
        printf("%d is Odd.", i);
    }
printf("\n");
//_______________________________________________________________

/*
EX2:Write C Program to Check Vowel or Constant
*/
char ch;
printf("Enter an alphabet: ");
fflush(stdin); fflush(stdout);
scanf("%c", &ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("%c is a vowel.", ch);
    }
else
    {
        printf("%c is a constant.", ch);
    }
printf("\n");
//_______________________________________________________________
/*
Ex3: C Program to Find the Largest Number Among Three Numbers
*/
float a,b,c;
float x;
printf("Enter Three Numbers: ");
fflush(stdin); fflush(stdout);
scanf("%f %f %f", &a, &b, &c);
if(a>=b&&a>=c)
    x=a;
else if(b>=a&&b>=c)
    x=b;
else if(c>=b&&c>=a)
    x=c;
printf("Largest number = %f", x);

printf("\n");
//_______________________________________________________________
/*
Ex4: C Program to Check whether a Number is Positive or Negative
*/
printf("Enter a number: ");
fflush(stdin); fflush(stdout);
scanf("%f", &x);
if(x>0)
    printf("%f is positive.",x);
else if(x<0)
    printf("%f is negative.",x);
else if(x==0)
    printf("You entered zero.");
//Program has a logical error where if the user inputs something that's not
//a float or integer, it considers it as zero. trying to fix that.

printf("\n");
//_______________________________________________________________
/*
Ex5: C Program to Check whether a character is an alphabet or not
*/
int m;
char cha;
printf("Enter a character: ");
fflush(stdin); fflush(stdout);
scanf("%c", &cha);
m=cha;
//according to ASCII sheet, uppercase letters are from 65 to 90 and lowercase from 97 to 122
if((m>=65&&m<=90)||(m>=97&&m<=122))
    printf("%c is an alphabet",cha);
else
    printf("%c is not an alphabet",cha);

printf("\n");
//_______________________________________________________________
/*
Ex6: C Program to Calculate Sum of Natural Numbers
*/
int x_6, y_6, i_6;
printf("Enter an integer:");
fflush(stdin); fflush(stdout);
scanf("%d", &x_6);
for(i_6=1;i_6<=x_6;i_6++)
{
y_6 += i_6;
}
printf("sum = %d ", y_6);

printf("\n");
//_______________________________________________________________
/*
Ex7: C Program to Find Factorial of a Number
*/
int x_7, y_7=1, i_7;
printf("Enter an integer:");
fflush(stdin); fflush(stdout);
scanf("%d", &x_7);
if(x_7>0)
{
    for(i_7=1;i_7<=x_7;i_7++)
    {
        y_7 = y_7 * i_7;
    }
    printf("Factorial = %d ", y_7);
}
else if(x_7<0)
{
    printf("Error!! Factorial of negative number doesn't exist.");
}

printf("\n");
//_______________________________________________________________
/*
Ex8: C Program to Add, Subtract, Multiply, or Divide using switch case
*/
char choice, ans='y';
float u,v,rslt;
do
{
printf("Enter operator either + or - or * or / : ");
fflush(stdin); fflush(stdout);
scanf("%c",&choice);
printf("Enter two operands: ");
fflush(stdin); fflush(stdout);
scanf("%f %f",&u,&v);

    switch(choice)
    {
        case('+'):
        {
            rslt = u + v;
            printf("%f %c %f = %f", u,choice,v,rslt);
        }
        break;
        case('-'):
        {
            rslt = u - v;
            printf("%f %c %f = %f", u,choice,v,rslt);
        }
        break;
        case('*'):
        {
            rslt = u * v;
            printf("%f %c %f = %f", u,choice,v,rslt);
        }
        break;
        case('/'):
        {
            rslt = u / v;
            printf("%f %c %f = %f", u,choice,v,rslt);
        }
        break;
        default:
        {
            printf("\ninvalid input!");
        }
        break;
    }
printf("\n\nAnother calculation? (y/n)");
fflush(stdin); fflush(stdout);
scanf("%c",&ans);
}

while(ans=='y');
    {
        printf("Thanks for using our service.");
    }
}
