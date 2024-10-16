#include <stdio.h>
int main(void)
{
	int a,b,c,d,e;
	scanf("%d%d%d",&a,&b,&c);
	d=c/10;
	e=c-d*10;
	if(a==6||a==7)
	{
		printf("%d no",e);
		return 0;
	}
	if(b<200)
	{
		printf("%d no",e);
		return 0;
	}
	if(b>=200&&b<400)
	{
		if((e==1||e==6)&&a==1)
		{
		printf("%d yes",e);
		return 0;
		}
		if((e==2||e==7)&&a==2)
		{
		printf("%d yes",e);
		return 0;
		}
		if((e==3||e==8)&&a==3)
		{
		printf("%d yes",e);
		return 0;
		}
		if((e==4||e==9)&&a==4)
		{
		printf("%d yes",e);
		return 0;
		}
		if((e==5||e==0)&&a==5)
		{
		printf("%d yes",e);
		return 0;
		}
		printf("%d no",e);
		return 0;
	}
	if(e==1||e==3||e==5||e==7||e==9)
	{
		if(a==1||a==3||a==5)
		{
		printf("%d yes",e);
		return 0;
		}
		printf("%d no",e);
		return 0;
	}
	if(e==2||e==4||e==6||e==8||e==0)
	{
		if(a==2||a==4)
		{
		printf("%d yes",e);
		return 0;
		}
		printf("%d no",e);
		return 0;
	}
}
