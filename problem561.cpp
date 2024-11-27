#include<stdio.h>
#include<string.h>
int main(void)
{
	char text[101],*s;
	s=text;
	gets(text);
	for(int i=0;i<strlen(text);++i)
	{
		printf("%c ",*(s+i));
	}
	return 0;
}
