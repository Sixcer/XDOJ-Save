#include<stdio.h>
int main(void)
{
	char text[101];
	int i=0,j=0,k=0;
	for(i=0;i<101;i++)
	{
		text[i]=0;
	}
	gets(text);
	for(i=0;text[i]!=0;i++)
	{
		k+=text[i];
		
	}
	printf("%d",k%256);
	return 0;
}
