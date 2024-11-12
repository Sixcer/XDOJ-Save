#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *compress(char *src);
int main()
{
	char src[100];
	scanf("%s",src);

	char *ps = compress(src);
	
	puts(ps);
	return 0;
}
char *compress(char *src)
{
	
	int i,k=0;
	char j[100]={0};
	char a[100];
	&a=src;
	for(i=0;a[i]!=0;++i)
	{
		if(a[i]!=a[i+1])
		{
			j[k]=a[i];
			++k;
			j[k]=0x30+i+1;
		}
	}
	return *j;
}
