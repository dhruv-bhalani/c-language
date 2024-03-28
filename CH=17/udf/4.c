#include<stdio.h>

void alphabet(char st,char end);

main()
{
	alphabet('A','Z');
}

void alphabet(char st,char end)
{
	if(st <= end)
	{
		printf("%c  ",st);
		st++;
		alphabet(st,end);
	}
}
