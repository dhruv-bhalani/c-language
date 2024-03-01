#include<stdio.h>

main()
{
	int r,c,i,j;
	
	printf("enter array size");
	scanf("%d",&r);
		
	printf("enter array size");
	scanf("%d",&c);
	printf("\n");
	
	int a[r][c],n;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	int r1,c1,s1=0,s2=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("enter no of row :");
	scanf("%d",&r1);
	printf("\n\nElemets of row %d :\n\n",r1);
	
	for(i=r1;i<=r1;i++)
	{
		for(j=0;j<c;j++)
		{
			s1 += a[i][j];
			printf("%d,",a[r1][j]);
		}
	}
	
	printf("\nsum of row %d : %d\n\n",r1,s1);
	printf("enter no of col :");
	scanf("%d",&c1);
	printf("\n\nElemets of col %d :\n\n",c1);
	
	for(i=0;i<=r;i++)
		{
			printf("%d,",a[i][c1]);
			s2 += a[i][c1];
		}
	
	printf("\nsum of col %d : %d\n\n",c1,s2);
	
}
