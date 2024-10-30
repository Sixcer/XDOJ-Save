#include<stdio.h>
int main(void)
{
	int a,b,c,i,j=2;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		c=a;
		a=b;
		b=c;
	}
	int num[201];
	num[0]=2;
	num[1]=3;
	for(i=5;j<b;i+=2)
	{
		for(c=0;num[c]*num[c]<i;c++)
		{
			if(i%num[c]==0)
			break;
		}
		if(num[c]*num[c]>i)
		{
			num[j]=i;
			j++;
		}
	}
	i=0;
	for(c=a-1;c<b;c++)
	{
		i+=num[c];
	}
	printf("%d",i);
	return 0;
}
