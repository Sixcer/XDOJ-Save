#include<stdio.h>
int fun(int);
int main(void)
{
	int a=0,j=0;
	char i[50]={0};
	scanf("%s",i);
	for(a=0;i[a]!=0;++a)
	{
	if(fun(i[a])==1)
	++j;
	}
	printf("%d",j);
}
int fun(int i)
{
	if(i>='A'&&i<='z')
	return 1;
	else
	return 0;
}
