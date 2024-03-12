#include<stdio.h>

void divisible (int x);

void main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);	
	
	divisible (n);
}

void divisible (int x)
{
	if(x%3==0 && x%5==0)
	{
		printf("Number is divisible by 3 and 5");
	}
	else
	{
		printf("Number is not divisible by 3 and 5");
	}
}
