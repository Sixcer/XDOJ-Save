#include<stdio.h>
int main(void)
{
	int i,j,p,q=0;
	scanf("%d",&p);
	p-=1;
	for(i=3;p+10>0;i+=2)
	{
		for(j=2;j*j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j*j>i)
		{
			p-=1;
		if(p<=0&&p+10>=0)
		{
			q+=i;
		}
	}
	}
	printf("%d",q);
	return 0;
}
