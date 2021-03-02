#include<stdio.h>
int main()
{
	int a[11]={};
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=9;i>=0;i--)
	{
		if(a[i]!=0)printf("%d ",a[i]);
	}
	printf("\n");
}
