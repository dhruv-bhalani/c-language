#include<stdio.h>

main()
{
	int x,y,i;
	
	printf("Enter Array 01 size : ");
	scanf("%d",&x);
	int a[x];
	
	printf("Enter Array 02 size : ");
	scanf("%d",&y);
	int b[y],merge[x+y];
	
	printf("\n\n--: ARRAY-01 :--\n\n");
	
	for(i=0;i<x;i++)
	{
		printf("Enter Array a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n--: ARRAY-02 :--\n\n");
	
	for(i=0;i<y;i++)
	{
		printf("Enter Array b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<x;i++)
	{
		merge[i] = a[i];
	}
	
	for(i=0;i<x+y;i++)
	{
		merge[i+x] = b[i];
	}
	
	printf("\n\n--: MERGED ARRAY :--\n\n");
	
	for(i=0;i<x+y;i++)
	{
		printf("Merge[%d] = %d\n",i,merge[i]);
	}
}
