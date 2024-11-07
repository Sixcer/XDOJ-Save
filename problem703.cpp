#include<stdio.h>
int minb(int,int);
int imax(int a,int b){return a>b?a:b;}
int main(void)
{
	int n,i,j,k,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&j);
		if(i==0)
		k=j;
		else
		{
			sum+=minb(j,k);
			k=j;
		}
	}
	printf("%d\n",sum);
	return 0;
}
int minb(int a,int b)
{
	int i;
	for(i=imax(a,b);i<=a*b;++i)
	{
		if(i%a==0&&i%b==0)
		{
			return i;
		}
	}
}
