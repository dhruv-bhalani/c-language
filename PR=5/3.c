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
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
}
