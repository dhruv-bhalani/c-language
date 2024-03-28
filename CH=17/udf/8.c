#include<stdio.h>

void alphabet(int st,int end);

main()
{
	alphabet(1,100);
}

void alphabet(int st,int end)
{
	if(st <= end)
	{
		if(st%3==0 && st%5==0)
		{
			printf("%d  ",st);	
		}
		st++;
		alphabet(st,end);	
	}
	
}
