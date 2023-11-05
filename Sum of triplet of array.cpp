#include<stdio.h>
int main ()
{
	int i,n,sum,j,t,k,m,p;
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
		for(j=i+1;j<n-1;j++)
		{
			for(m=j+1;m<n;m++)
			{
			if(sum==(a[i]+a[j]+a[m]))
			{
				t=i;
				k=j;
				p=m;
			}
			}
		}
		i++;
	}
	while(i<n-2);
	printf("%d %d %d",a[t],a[k],a[p]);
	return 0;
}