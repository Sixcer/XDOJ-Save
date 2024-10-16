#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=a/100;
	c=(a-100*b)/50;
	d=(a-100*b-50*c)/20;
	e=(a-100*b-50*c-20*d)/10;
	f=(a-100*b-50*c-20*d-10*e)/5;
	g=a-100*b-50*c-20*d-10*e-5*f;
	printf("%d %d %d %d %d %d",b,c,d,e,f,g);
	return 0;
	
}
