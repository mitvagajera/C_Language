#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();

 printf("enter the value of A :");
 scanf("%d",&a);

 if(a > 0)
 {
       printf("A is positive value.");
 }

 else if(a==0)
 {
 printf("A is neutral value.");
 }
 else
 {
	printf("A is negative value.");
 }
 getch();
}