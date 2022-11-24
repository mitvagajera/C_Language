#include<stdio.h>
void main()

{
	FILE *fp;
	int n;
	
	fp=fopen("C:\\Users\\R22\\Desktop\\mitva.txt","r");
	
    fscanf(fp,"%d",&n);
    printf("file : %d",n);
    
    fclose(fp);
}
