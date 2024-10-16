#include<stdio.h>
int main(void)
{
	int m,n,q,r,a,b;
	scanf("%d %d %d %d",&m,&n,&q,&r);
	a=m/n;
	b=m-a*n;
	if(a==q&&b==r)  printf("yes");
	if(a!=q||b!=r)  printf("%d %d",a,b);
	return 0;
	
}
