#include<stdio.h>
#include<conio.h>

main()
{
	char a;
	clrscr();
			printf("s= sunday\n");
			printf("M= sunday\n");
			printf("T= Tuesday\n");
			printf("W= Wednesday\n");
			printf("t= Thursday\n");
			printf("F= Friday\n");
			printf("S= Saturday\n\n\n");

	printf("enter a :");
	scanf("%C",&a);
	printf("\n\n");
	switch(a)
	{	case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thursday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Saturday");
			break;
		case 's':
			printf("Sunday");
			break;
		default:
			printf("invelid input");

			 }
		 
	getch();
}




