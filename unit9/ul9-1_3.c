#include<stdio.h>

main()
{
	int i,n,length=0,sum=0;
	printf("enter length of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0 ;i<n ;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
   }
	  for(i=0 ;i<n ;i++)
	  {
	  printf("a[%d]: %d\n",i,a[i]);
	  sum = sum + a[i];
	  length++;
      }
   printf("array of length is : %d",sum/length);
}


