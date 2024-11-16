#include<stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int M[N];
	int i,j=0,k;
	for(i=0;i<N;++i)
	{
		scanf("%d",&M[i]);
		if(M[i]>j)
		j=M[i];
	}
	int a;
	int stu[N][j*8];	
	for(i=0;i<N;++i)
	{
		for(k=0;k<j*8;++k)
		{
			stu[i][k]=0;
		}
	}
	for(i=0;i<N;++i)
	{
		for(k=0;k<j;++k)
		{
			if(k<=M[i]-1)
			{
				for(a=k*8;a<8*(k+1);++a)
				{
				stu[i][a]=1;
				}
			}
		}
	}
	int b=0,c=0;
	/*for(i=0;i<N;++i)
	{
		for(k=0;k<j*8;++k)
		{
			printf("%d ",stu[i][k]);
		}
		if(k==j*8)
		putchar('\n');
	}*/
	for(a=0;a<N;++a)
	{
		b=0;
		printf("#%d\n",a+1);
		for(k=0;k<M[a]*8;++k)
		{
			for(i=0;i<N;++i)
			{
				if(stu[i][k]==1)
				{
					++b;
					++c;
					if(i==a)
					{
						if(c<=1&&b!=1)
						{
							++b;
							printf("%d ",b);
							c=0;
						}
						else
						{
							printf("%d ",b);
							c=0;
						}
					}
				}
			}
			if((k+1)%8==0)
			{
				putchar('\n');
			}
		}
	}
}
