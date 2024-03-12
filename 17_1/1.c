#include<stdio.h>

void cube(int x);

void main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);	
	
	cube(n);
}

void cube(int x)
{
	printf("\n cube is %d => %d ",x,x*x*x);
}
