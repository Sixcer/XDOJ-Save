#include <stdio.h>
int main(void)
{
	float a;
	scanf("%f",&a);
	printf("%.2f\n%.2f\n",a*0.6,a*0.4+50);
	if(a*0.6<a*0.4+50)
	{
		printf("A");
	}
	else
	{
		printf("B");
	}
	return 0;
	
}

