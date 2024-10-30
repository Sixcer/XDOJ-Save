#include<stdio.h>
int main(void)
{
	int a=0,b=1;
	while(b!=0)
	{
		scanf("%d",&b);
		if(b%2!=0)
		{
			a+=b;
		}
		if(b==0)
		{
			printf("%d",a);
			return 0;
		}
	}
}
