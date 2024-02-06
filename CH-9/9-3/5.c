#include<stdio.h>
#include<conio.h>

main()
{
	int n,sum=0,i;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum += n;
	}
	printf("sum=> %d ",sum);
	getch();
}
