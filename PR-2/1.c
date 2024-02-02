#include<stdio.h>
#include<conio.h>

main()
{
	char a;
	clrscr()
	printf("Enter a");
	scanf("%c",&a);
	
	if(a>='0'&& a<='9')
	{
		printf("%c is digit",a);
	}
	else if(a>='A'&& a<='Z')
	{
		printf("%c is alphabet",a);
	}
	else if(a>='a'&& a<='z')
	{
		printf("%c is alphabet",a);
	}
	else
	{
		printf("%c is special character",a);
	}
	getch()
}
