#include<stdio.h>
#include<math.h>
double doub(double a){return a*a;}
int main(void)
{
	int n,j,k;
	scanf("%d",&n);
	double eqx=0,nums[n];
	for(int i=0;i<n;++i)
	{
		scanf("%lf",&nums[i]);
		eqx+=nums[i];
	}
	double d=n;
	eqx/=d;
	double t=0;
	for(int i=0;i<n;++i)
	{
		t+=doub(nums[i]-eqx);
	}
	double b=t/(n-1);
	double s=sqrt(b);
	int c=0;
	for(int i=0;i<n;++i)
	{
		if(nums[i]<eqx-3*s||nums[i]>eqx+3*s)
		{
			++c;
		}
	}
	printf("%.4lf %d",s,c);
	return 0;
}
