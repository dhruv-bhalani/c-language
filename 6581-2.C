#include<stdio.h>
#include<conio.h>

main()
{
   int a;
   clrscr();
	printf("Enter any number :");
	scanf("%d",&a);
	if(a > 0)
	{
		printf("%d positive number :");
	}
	else if(a < 0)
	{
		printf("%d negetive number :",a);
	}
	else
	{
		print("%d neutrat number :",a);
	}
   getch();
}
