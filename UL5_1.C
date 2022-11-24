#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();

 printf("enter the value of x");
 scanf("%d",&a);
 printf("enter the value of y");
 scanf("%d",&b);


 printf("value is : %d ",(a*a) + (2*a*b) + (b*b));


 getch();
}