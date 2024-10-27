#include<stdio.h>
int main(void)
{
	int a,b,c,d=0,e=0,f=0,g=0;
	scanf("%d%d",&a,&b);
	for(c=1;c<=a/2;c++)
	{
		if(a%c==0)
		{
			d++;
			f+=c;
		}
	}
	for(c=1;c<=b/2;c++)
	{
		if(b%c==0)
		{
			e++;
			g+=c;
		}
	}
	if(f==b&&g==a)
	{
		printf("yes %d %d",d,e);
		return 0;
	}
	else
	{
		printf("no %d %d",d,e);
		return 0;
	}
}
