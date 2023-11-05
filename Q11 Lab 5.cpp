#include<stdio.h>
int main ()
{
	int i,j,n,k,t;
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
			if(a[i]==a[j])
	        {
	        	printf("%d ",a[i]);
				k=a[i];
				t=j;
			}	
		}
		i++;
	}
	while(k!=a[t]);
	printf("%d %d",k,i-1);
	return 0;
}