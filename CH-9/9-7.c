#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n,sum=0;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	while(a<=n)
	{
		sum += a;
		a++;
	}
	printf("\nSum of N numbers : %d",sum);
	getch();
}