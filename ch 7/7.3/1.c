#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("a any number :");
	scanf("%d",&a);
	printf("b any number :");
	scanf("%d",&b);
	printf("c any number :");
	scanf("%d",&c);
	
	(a<b)
			?(a<c)
				?printf("a is mini")
				:printf("c is mini")
			:(b<c)
				?printf("b is mini")
				:printf("c is mini");
	getch();
}
