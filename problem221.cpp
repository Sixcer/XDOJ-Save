#include<stdio.h>
void fun(char *);
int main(void)
{
	char words[100]={0};
	scanf("%s",words);
	fun(words);
	return 0;
}
void fun(char *a)
{
	int i,j=0,k=0;
	for(i=0;i<100;++i)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			++j;
		}
		if(a[i]>='0'&&a[i]<='9')
		{
			++k;
		}
	}
	printf("%d,%d",j,k);
	return;
}
