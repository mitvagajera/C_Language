#include<stdio.h>
#include<conio.h>
main()
{
 int i=1,n;
 clrscr();

 printf("enter theb value :");
 scanf("%d",&n);
 do
 {
    printf("%d ",i++);
 }
 while(i<=n);


 getch();
}