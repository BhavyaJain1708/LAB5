#include<stdio.h>
int main ()
{
	int i,j,n,t;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
		{
		int t;
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;	
		}
	    }
	}
	printf("The maximum is %d\n",a[n-1]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j]<a[j+1])
		{
		int t;
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;	
		}
	    }
	}
	printf("The minimum is %d\n",a[n-1]);
	t=0;
	for(i=0;i<n;i++)
	{
		t=t+a[i];
	}
	printf("The average is %d",t/n);
	return 0;
}