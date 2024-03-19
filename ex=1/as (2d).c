#include<stdio.h>


main()
{
	int r,c,n,i,j;
	
	printf("enter row :");
	scanf("%d",&r);
	printf("enter col :");
	scanf("%d",&c);
	printf("\n\n\t array input \n");
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{printf("emter a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(a[i][j]<a[i][j])
			{
				n = a[i][j];
				a[i][j] = a[i][j];
				a[i][j] = n;
			}
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]  : %d\n",i,j,a[i][j]);
		}
	}
}
