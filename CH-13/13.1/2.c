#include<stdio.h>

main()
{
	int m,size,n,i,j;
	
	printf("enter size array");
	scanf("%d",&size);
	int a[size];
	
	for(i=0;i<size;i++)
	{
		printf("emter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				n = a[i];
				a[i] = a[j];
				a[j] = n;
			}
		}
	}
	
	for(i=0;i<size;i++)
	{
		printf("a[%d]  : %d\n",i,a[i]);
	}
}
