#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("enter the array of row size :");
	scanf("%d",&r);
	printf("enter the array of column size :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0 ;i<r ;i++)
	{
		for(j=0 ;j<c ;j++)
		{
			printf("enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0 ;i<r ;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
