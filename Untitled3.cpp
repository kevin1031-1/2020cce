#include<stdio.h>
int MYPOWER(int a,int b)
{
	int n=1;
	for(int i=1;i<=b;i++)
	{
		n=n*a;
	}
	return n;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
