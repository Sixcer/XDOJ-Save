#include<stdio.h>
void fun(char *,char*);
int main(void)
{
	char a[100]={0},b[100]={0};
	gets(a);
	gets(b);
	fun(a,b);
	return 0;
}
void fun(char *a,char*b)
{
	printf("%s",a);
	printf("%s",b);
	return;
}
