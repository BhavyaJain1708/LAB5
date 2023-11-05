#include<stdio.h>
int main ()
{
	int c,i,k,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of k");
	scanf("%d",&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}