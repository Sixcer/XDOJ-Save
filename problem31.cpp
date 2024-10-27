#include <stdio.h>
int main(void)
{
	unsigned int a,b;
	scanf("%u%u",&a,&b);
	if(a==0)
	{
	printf("%u",b);
	return 0;
	}
	if(b==0)
	{
	printf("%u",a);
	return 0;
	}
	unsigned int c;
	if(a<=b) c=b;
	else c=a;
	unsigned int j;
	for(j=c;j>0;j--)
	{
		if(b%j==0&&a%j==0)
		{
		printf("%u",j);
		return 0;
		}
	}
}
