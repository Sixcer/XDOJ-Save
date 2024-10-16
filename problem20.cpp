#include<stdio.h>
int main(void)
{
	int a,c;
	char b;//b如果用int就判错 
	scanf("%d%c%d",&a,&b,&c);
	if(b=='+')
	{
		printf("%d%c%d=%d",a,b,c,a+c);
		return 0;	
	}
	if(b=='-')
	{
		printf("%d%c%d=%d",a,b,c,a-c);
		return 0;
	}
	if(b=='*')
	{
		printf("%d%c%d=%d",a,b,c,a*c);
		return 0;	
	}
	if(b=='/')
	{
		printf("%d%c%d=%d",a,b,c,a/c);
		return 0;	
	}
	if(b=='%')
	{
		printf("%d%c%d=%d",a,b,c,a%c);
		return 0;	
	}
	return 0;
}
