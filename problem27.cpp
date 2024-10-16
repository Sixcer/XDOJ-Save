#include<stdio.h>
int main(void)
{
	float a;
	scanf("%f",&a);
	if(a>=0&&a<=110)
	{
		printf("%.2f",a*0.5);
		return 0;
	}
	if(a>110&&a<=210)
	{
		printf("%.2f",(a-110)*0.55+55);
		return 0;
	}
	printf("%.2f",(a-210)*0.7+110);
	return 0;
}
