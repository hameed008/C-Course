#include<stdio.h>
#include<conio.h>
/* 
💡Questions

✅Q1: Quess the output.
✅Q2: Write a program to print "Hameed" on screen.
✅Q3: Write a program to print 'The value of x is 10'.
✅Q4: Write a program to print 'Sum of 5 and 6 is 11'.
✅Q5: Write a program which takes one character from the keyboard using 'getch() function' and display its ASCII code.
*/

int main()
{
//💡Solution

//✅Q1
  getch();
  printf("Hello \n");
  getch();

//✅Q2: 
  printf("\"Hameed\" \n");

//✅Q3:
int x = 10;
printf("The value of x is %d \n",x);

//✅Q4:
int a = 5;
int b = 6;
printf("Sum of %d and %d is %d \n",a,b,a+b);

//✅Q5:
printf("Enter a character:\n");
char c = getch();
printf("%c is %d \n",c,c);


getch();
return  0;
}