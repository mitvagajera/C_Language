#include<stdio.h>
#include<conio.h>
main()

{
 int a,b,c;
 clrscr();

 printf("enter A :");
 scanf("%d",&a);
 printf("enter B :");
 scanf("%d",&b);
 printf("enter C :");
 scanf("%d",&c);
 (a>b)
    ?(a>c)
	?printf("A is max......")
	:printf("B is max......")

   :  (b>c)
     ?printf("b is max......")
     :printf("c is max......");
 getch();
}