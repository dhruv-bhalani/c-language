#include<stdio.h>
#include<conio.h>

main()
{
	int x=1,y=0,rem,n,a;
//	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	
	a = n;
	while(n != 0)
	{
		rem = n%10;
		x *= rem;
		y += rem;
		n /= 10;
	}
	
	if(x==y)
	{
		printf("%d is a magic number",a);
	}
	else
	{
		printf("%d is not a magic number",a);
	}
	getch();
}
