#include<stdio.h>
int main(void)
{
	int d,y,m=1,i,days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d",&y,&d);
	if(y%4==0&&y%100!=0||y%400==0)
	{
		days[1]+=1;
	}
	for(i=0;i<12;i++)
	{
		if(d>days[i])
		{
			m++;
			d-=days[i];
		}
		else
		{
			printf("%d %d",m,d);
			return 0;
		}
	}
}
