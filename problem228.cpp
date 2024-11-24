#include<stdio.h>
void fun(char*);
int main(void)
{
	char s[1000]={0};
	scanf("%s",s);
	fun(s);
	return 0;
}
void fun(char *s)
{
	int i,j;
	char t[1000]={0};
	for(i=0,j=0;s[i]!=0;++j,i+=2)
	{
		t[j]=s[i];
	}
	puts(t);
	return;
}
