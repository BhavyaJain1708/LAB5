 #include<stdio.h>
 int main ()
 {
 	int i,N,t,k;
 	printf("Enter the value of N");
 	scanf("%d",&N);
 	int a[N-1];
 	for(i=0;i<N-1;i++)
	{
		scanf("%d",&a[i]);
	}
	t=0;
	for(i=1;i<N+1;i++)
	{
		t=t+i;
	}
	k=0;
	for(i=0;i<N-1;i++)
	{
	k=k+a[i];	
	}
	printf("%d",t-k);
	return 0;
 }