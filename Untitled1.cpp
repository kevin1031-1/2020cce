#include<stdio.h>
int main()
{
	int m,n,t;
	scanf("%d%d",&m,&n);
	int a=m;
	int b=n;
	while(m!=0)
	{
		t=n%m;
		n=m;
		m=t;
	}
	printf("%d %d\n",a/n,b/n);
}
