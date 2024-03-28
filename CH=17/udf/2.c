#include<stdio.h>

void binary(int n,int x[],int z,int b);

void main()
{
	int a,m,b;
	int x[9];
	printf("Enter Any Number : ");
	scanf("%d",&a);
	binary(a,x,0,0);
}

void binary(int a,int x[],int z,int b)
{
	int i=0;
	while(a!=0)
	{
		z = a%2;
		a /= 2;

		x[i]=z;
		i++;
	}
	
	for(i=i-1;i>=0;i--)
	{
			printf("%d",x[i]);	
	}
	
}

