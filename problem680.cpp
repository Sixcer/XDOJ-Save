#include<stdio.h>
int main(void)
{
	double a;
	scanf("%lf",&a);
	double i,j,k=-99;
	for(i=0;i<=10;i+=0.0001)
	{
		j=a*i*i-i*i*i;
		if(j>k)
		k=j;
	}
	printf("%.2lf",k);
	return 0;
}
