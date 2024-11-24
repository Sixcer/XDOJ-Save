#include<stdio.h>
void fun(int);
int main(void)
{
	int a;
	scanf("%d",&a);
	fun(a);
}
void fun(int a)
{
	if(a<0)
	{
	putchar('-');
	a*=-1;
	}
	
	if(a>9)
	{
		fun(a/10);
	}
	printf("%c",a%10+48);
}
