#include <stdio.h>
int main(void)
{
	char b,c,d,e,f;
	int a = 0;
	scanf("%c %c %c %c %c",&b,&c,&d,&e,&f);
	if(b==65||b==97)
	{
		a++;
	}
	if(c==65||c==97)
	{
		a++;
	}
	if(d==65||d==97)
	{
		a++;
	}
	if(e==65||e==97)
	{
		a++;
	}
	if(f==65||f==97)
	{
		a++;
	}
	printf("%d",a);
	return 0;
	
}
