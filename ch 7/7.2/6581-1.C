#include<stdio.h>
#include<stdio.h>

main()
{   int a,b,c;
	clrscr();
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter c :");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
		      printf("%d is mini",a);
		}
		else
		{
		      printf("%d is mini",c);
		}
	}
	else
	{
		if(b>c)
		{
		      printf("%d is mini",b);
		}
		else
		{
		      printf("%d is mini",c);
		}
	}
	getch();


}
