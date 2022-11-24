#include<stdio.h>

struct distans
{
	int inch;
	int feet;
};

void main()
{
	int distans d1,d2,d3;
	
	printf("enter the d1 inch : ");
	scanf("%d",&d1.inch);
	printf("enter the d1 feet : ");
	scanf("%d",&d1.feet);
	printf("enter the d2 inch : ");
	scanf("%d",&d1.inch);
	printf("enter the d2 feet : ");
	scanf("%d",&d1.feet);
	
	d3.inch = d2.inch;
	d3.feet = d2.feet;
	
	if(d3.inch >=12)
	{
		 d3.inch = d3.inch - 12;
		 ++d3.feet;
		 
		 printf("d3 inch : %d\n",d3.inch);
		 printf("d3 feet : %d\n",d3.feet);
		
		
	}
	
	
	
	
	
	
	
}
