#include<stdio.h>
#include<math.h>
int fact(int);
double nsin(int,double);
int main(void)
{
	int n;
	double x;
	scanf("%d %lf",&n,&x);
	int i;
	double sum=0;
	for(i=1;i<=n;++i)
	{
		sum+=nsin(i,x);
	}
	printf("%.4lf",sum);
	return 0;
}
int fact(int n)
{
	int i=1,j=1;
	for(i=1;i<=n;++i)
	{
		j*=i;
	}
	return j;
}
double nsin(int n,double x)
{
	double a=n;
	double b=pow(x,2*a-1);
	double c=fact(2*n-1);
	if(n%2==0)
	return -b/c;
	else
	return b/c;
}
