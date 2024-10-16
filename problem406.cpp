#include <stdio.h>
int main(void)
{
	char a;
	scanf ("%c",&a);
	{
	if(a>=97&&a<=119)
	{
		printf("%c %c",a,a+3);
	}
	if(a>119&&a<=122)
	{
		printf("%c %c",a,a-23);
	}
	if(a>=67&&a<=90)
	{
		printf("%c %c",a,a-2);
	}
	if(a==65||a==66)
	{
		printf("%c %c",a,a+24);
	}
	if(a>=48&&a<=57)
	{
		printf("%c %d",a,57-a);
	}
	if(a==32)
	{
		printf("%c *",a);
	}
	}
	else
	{
		printf("%c #",a);
	}
	return 0;
	
}
