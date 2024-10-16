#include <stdio.h>
int main(void)
{
	float h,m;
	float t;
	scanf("%f %f",&h,&m);
	t=h+m/60;
	float T;
	T=(4*t*t/(t+2))-20;
	printf("%.2f",T);
	return 0;
	
}
