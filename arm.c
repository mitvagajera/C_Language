#include<stdio.h>

main()
{
	int n,rem,arm=0,cpy;
	
	printf("enter number : ");
	scanf("%d",&n);
	cpy = n;
	
	while(n !=0)
	
	{
		rem = n % 10;
		arm = arm + (rem * rem * rem);
		n /=10;
	
	}
	
	if(cpy == arm)
	{
		printf("it's armstrong !!\narm : %d\nacpy : %d",arm,cpy);
	}
	else
	{
		printf("it's not armstrong !!\narm : %d\nacpy : %d",arm,cpy);
		
	}
}
