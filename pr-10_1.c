#include<stdio.h>
void main()
{
	 FILE *p1;
	p1=fopen("C:\\Users\\R22\\Desktop\\mitva .c.txt","w");
	
	fprintf(p1,"hello!how are you?\n");
	
	fclose(p1);
}









