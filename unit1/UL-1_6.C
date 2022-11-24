#include<stdio.h>
#include<conio.h>
main()
{
 int i=1,n;
 clrscr();
 printf("enter ending point :");
 scanf("%d",&n);

 while(n>=1)
 {
 if(n % 2 == 0)
 {
 printf(" %d\n ",n);
 }
 n--;
 }
 getch();
}