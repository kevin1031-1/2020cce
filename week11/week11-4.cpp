#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[2000][80];
char b[80];
int c(const void *p1,const void *p2)
{
	int d1=*((int*)p1);
	int d2=*((int*)p2);
	if(d1>d2)return 1;
	if(d1==d2)return 0;
	if(d1<d2)return -1;
}
int main()
{
	int n,i=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		gets(b);
	}
	qsort(a,n,80,c);
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],a[k])!=0)
		{
			printf("%s %d\n",a[k],i-k);
			k=i;
		}
	}
	printf("%s %d\n",a[k],i-k);
}
