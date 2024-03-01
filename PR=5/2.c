#include<stdio.h>

main()
{
	int r,c,i,j;
	
	printf("enter array size");
	scanf("%d",&r);
		
	printf("enter array size");
	scanf("%d",&c);
	
	int a[r][c],n;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	
	n=a[0][0];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>n)
			
			n=a[i][j];
		}
	}
	
	printf("large no %d",n);
}
