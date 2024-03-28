#include<stdio.h>

void leapyear(int st,int end);

void main()
{
	int a,b;
	printf("Enter First Year : ");
	scanf("%d",&a);
	printf("Enter Second Year : ");
	scanf("%d",&b);
	
	printf("Leap year :");
	leapyear(a,b);
}

void leapyear(int st,int end)
{
	if(st <= end)
	{
		if( st % 4 == 0)	
		{
			printf("%d\a\n\n",st);	
		}
		st++;
		leapyear(st,end);
	}
}
