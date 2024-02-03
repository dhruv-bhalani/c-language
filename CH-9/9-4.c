#include<stdio.h>
#include<conio.h>

main()
{       int n;
	clrscr();
	printf("Enter any number");
	scanf("%i",&n);
	while(n>=1)
	{
	if(n%4==0){
		printf("%d\t",n);
		n++;
		}
	}
	getch();
}