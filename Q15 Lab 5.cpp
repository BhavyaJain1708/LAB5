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
	k=0;
	do
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				k++;
				t=i;
			}
		}
		i++;
	}while(k<n/2);
		if(k<=n/2)
		{
			printf("No majority element");
		}
		else
		{
	printf("%d",a[t]);
}
	return 0;
}