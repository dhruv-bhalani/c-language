#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n,mul;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	while(a<=n)
	{
		mul *= a;
		a++;
	}
	printf("\nMultiplication of N numbers : %d",mul);
	getch();
}