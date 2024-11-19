#include<stdio.h>
void fun(char*);
int main(void)
{
	char words[50]={0};
	gets(words);
	fun(words);
}
void fun(char *a)
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
		{
			++j;
		}
	}
	printf("%d",j);
}
