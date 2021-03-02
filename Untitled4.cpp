#include<stdio.h>
int main()
{
	int n,x=0;
	scanf("%d",&n);
	for(int i=n-1;i>0;i--)
	{
		x+=n*i;
		n--;
	}
	printf("%d\n",x);
}
