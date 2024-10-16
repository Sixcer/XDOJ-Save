#include <stdio.h>
int main(void)
{
	float a,b,c;
	scanf("%f %f",&a,&b);
	c=a/b;
	int d;
	d=a/b;
	int e;
	e=a-b*d;
	if(c==d)     printf("yes");
	if(c!=d)     printf("%d %d",d,e);
	return 0;
	
}
