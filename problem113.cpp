#include <stdio.h>
int main(void)
{
	float a,b,d;
	int c,e;
	scanf("%f %d",&a,&c);
	e=c/5;
	if(a<=3.0)  d=e*2+10;
	if(a>3.0&&a<=10.0)  d=10+(a-3)*2+e*2;
	if(a>10.0)  d=24+e*2+(a-10)*3;
	printf("%.0f",d);
	return 0;
	
}
