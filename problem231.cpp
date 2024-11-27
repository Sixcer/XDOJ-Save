#include<stdio.h>
int main(void)
{
	char text[100];
	gets(text);
	int i,j=0,k=0;
	for(i=0;text[i]!='.';++i)
	{
		if(text[i]!=' ')
		{
			++j;
		}
		if(text[i]==' '||text[i+1]=='.')
		{
			if(j>k)
			{
				k=j;
			}
			j=0;
		}
	}
	printf("%d",k);
	return 0;
}
