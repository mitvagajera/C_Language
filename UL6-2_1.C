#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();

 printf("enter A :");
 scanf("%d",&a);
 printf("enter B :");
 scanf("%d",&b);
 (a>b)
     ?printf("A is max......")
     :printf("B is max......");
 getch();
}