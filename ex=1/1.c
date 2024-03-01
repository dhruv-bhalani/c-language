#include<stdio.h>

main()
{
	int i,n,sum=0;
	
	printf("enter any number :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sum += i;
	}
	printf("sum %d",sum);
}
