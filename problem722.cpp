#include<stdio.h>
int function(int a,int b);
int main(void)
{
	int a,b,count;
	scanf("%d%d",&a,&b);
	
	count = function(a,b);
	
	printf("%d\n",count);
	return 0;
}
int imin(int a,int b){return a>b?b:a;}
int imax(int a,int b){return a>b?a:b;}
int timex(int n)
{
	int i;
	for(i=0;n>0;i++)
	{
		n/=10;
	}
	return i;
}

int pow(int a,int b)
{
	int s=1;
	for(int i=0;i<b;++i)
	{
		s*=a;
	}
	return s;
}

int flower(int n)
{
	int cao=n;
	int a=timex(n);
	int i,j=0,k;
	for(int i=0;i<a;++i)
	{
		k=n%10;
		j+=pow(k,a);
		n/=10;
	}
	if(j==cao)
	return 1;
	if(j!=cao)
	return 0;
}

int function(int a,int b)
{
	
	int x=0,i;
	if(imin(a,b)<10)
	i=10;
	else
	i=imin(a,b);
	for(i;i<=imax(a,b);++i)
	{
		if(flower(i)==1)
		++x;
	}
	return x;
}
