#include<stdio.h>
int main ()
{
	int i,n,k,j,p,q;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=0;
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			k++;
		}
		else
		{
			j++;
		}
	}
	int b[k];
	int c[j];
	p=0;
	q=0;
	for(i=0;i<n;i++)
	{
			if(a[i]%2==0)
			{
				b[p]=a[i];
				p++;
			}
			else
			{
				c[q]=a[i];
				q++;
			}
	}
	
	
	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);	
	}
	printf("\n");
	for(i=0;i<j;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}