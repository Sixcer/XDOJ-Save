#include<stdio.h>
int main(void)
{
	unsigned int a,b;
	scanf("%u%u",&a,&b);
	if(b==2)
	{
		if(a%100!=0&&a%4==0)
		{
			printf("29");
			return 0;
		}
		if(a%400==0)
		{
			printf("29");
			return 0;
		}
		printf("28");
		return 0;
	}
	if(b==4||b==6||b==9||b==11)
	{
		printf("30");
		return 0;
	}
	printf("31");
	return 0;
	
}
