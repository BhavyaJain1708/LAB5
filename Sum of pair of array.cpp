#include<stdio.h>
int main ()
{
	int i,n,sum,j,t,k;
	printf("Enter the value of sum");
	scanf("%d",&sum);
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	do
	{
		for(j=i+1;j<n;j++)
		{
			if(sum==(a[i]+a[j]))
			{
				t=i;
				k=j;
			}
		}
		i++;
	}
	while(i<n-1);
	printf("%d %d",a[t],a[k]);
	return 0;
}