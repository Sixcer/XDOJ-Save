#include <stdio.h>
#include<math.h>
int main(void)
{
	double r,n,a;
	scanf("%lf %lf",&r,&n);
	a=pow(1+r,n);
	printf("%.2f",a);
	return 0;
	
}
