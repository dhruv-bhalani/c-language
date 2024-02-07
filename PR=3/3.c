#include<stdio.h>
#include<conio.h>

main()
{
	int n,a;
//	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	
	a = n%10;
	
	while(n > 9)
	{
		n = n/10;
	}
	
	printf("\nSum of first and last digit : %d",n + a);
	getch();
}
