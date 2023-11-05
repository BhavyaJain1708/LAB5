#include<stdio.h>
int main ()
{
    int	i,j,k,n,t;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
		for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
    k=0;
	for(i=0;i<n;i=i++ +k)
	{
			k=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				k++;
			}
		}
			printf("The frequency of %d is %d\n",a[i],k);
	}
return 0;	
}