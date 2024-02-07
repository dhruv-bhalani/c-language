#include<stdio.h>
//#include<conio.h>

main()
{
	int n,c;
	//clrscr();
	printf("Enter any number");
	scanf("%d",&n);
	
	while(n != 0)
	{
		c++;
		n/=10;
	}
	
	printf("Total digit %d",c);
}
