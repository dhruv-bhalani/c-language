#include<stdio.h>

void largenum(int i,int x,int a[],int size);

void main()
{
	int i,size,x;
	printf("Enter Array Size : ");
	scanf("%d",&size);
	int a[size];
	
	printf("\n\n--ARRAY INPUT--\n");
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	largenum(i,x,a,size);
}

void largenum(int i,int x,int a[],int size)
{
	x = a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>x)
		{
			x = a[i];
		}
	}
	
	printf("\nLargest Element : %d",x);
}
