#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a/100;
	c=a/10-b*10;
	d=a-b*100-c*10;
	printf("%d",b+c+d);
	return 0;
	
}
