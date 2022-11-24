#include<stdio.h>

main()
{
	int i,n;
	printf("enter length of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0 ;i<n ;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	  for(i=0 ;i<n ;i++)
	  printf("a[%d]: %d\n",i,a[i]);
}
