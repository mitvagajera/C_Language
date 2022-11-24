#include<stdio.h>

void main()
{
	int a,b ;
	
	printf("enter the value of a : ");
	sacnf("%d",&a);
	printf("enter the value of b : ");
	sacnf("%d",&b);
	
	int *p1=&a;
	int *p2=&b;
	
	*p1= *p1 + *p2;
	*p2= *p1 - *p2;
	*p1= *p1 - *p2;
	printf("a is :b %d\nb is : %d",a,b);\
}
