#include <stdio.h>
int main(void)
{
	int l;
	int a,b,c,d,e;
	scanf("%d",&l);
	a=l/10000;
	b=l/1000-a*10;
	c=l/100-a*100-b*10;
	d=l/10-a*1000-b*100-c*10;
	e=l-a*10000-b*1000-c*100-d*10;
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
	
}
