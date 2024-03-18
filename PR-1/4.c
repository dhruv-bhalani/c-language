#include<stdio.h>
#include<conio.h>


main()
{
	int a,b;
	clrscr();
	
	printf("Enter value : a");
	scanf("%d",&a);
	printf("Enter value : b");
	scanf("%d",&b);
	
	a = a^b;
	b = a^b;
	a = a^b;
	
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	
	getch();
	
}
