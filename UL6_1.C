#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();
 printf("enter a:");
 scanf("%d", &a, &b);
 if( a<b )
 {
 printf("A is main");
 }
 else
 {
 printf("b is min");
 }
 getch();
}