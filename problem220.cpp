#include<stdio.h>
void fun(char *);
int main(void)
{
	char text[100];
	gets(text);
	fun(text);
	return 0;
}
void fun(char *text)
{
	int i;
	for(i=0;text[i]!=0;++i);
	printf("%d",i);
	return;
}
