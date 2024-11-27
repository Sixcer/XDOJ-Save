#include<stdio.h>
#include<string.h>
void copystr(int,char *);
int main(void)
{
	char text[51];
	int m;
	gets(text);
	scanf("%d",&m);
	if(strlen(text)<m)
	{
		printf("error");
	}
	else
	{
		copystr(m,text);
	}
	return 0;
}
void copystr(int m,char *text)
{
	int i;
	for(i=m-1;text[i]!=0;++i)
	{
		printf("%c",text[i]);
	}
	return;
}
