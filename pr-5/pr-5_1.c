# include<stdio.h>

main()
{
	int i,n;
	printf("enter an array size :");
	scanf("%d",&n);
	
	int a[n];
	
      for(i=0;i<n;i++)
	{
		printf("enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("a[%d] : %d\n",i,a[i]);
		}
	}
	
	
}
