#include <stdio.h>
int main(void)
{
	int m;
	float n;
	float a;
	scanf("%d %f",&m,&n);
	if(m==1&&n<200)
	{
		a=n;
		printf("yes %.1f %.1f %.1f",n,a,n-a);
	}
	if(m==1&&n>=200&&n<350)
	{
		a=n*0.9;
		printf("yes %.1f %.1f %.1f",n,a,n-a);
	}
	if(m==1&&n>=350&&n<500)
	{
		a=n*0.85;
		printf("yes %.1f %.1f %.1f",n,a,n-a);
	}
	if(m==1&&n>=500)
	{
		a=n*0.8;
		printf("yes %.1f %.1f %.1f",n,a,n-a);
	}
	if(m==0&&n>=500)
	{
		a=n*0.9;
		printf("no %.1f %.1f %.1f",n,a,n-a);
	}
	if(m==0&&n>=350&&n<500)
	{
		a=n*0.95;
		printf("no %.1f %.1f %.1f",n,a,n-a);
	}
	if(m==0&&n<350)
	{
		a=n;
		printf("no %.1f %.1f %.1f",n,a,n-a);
	}
	return 0;
}
