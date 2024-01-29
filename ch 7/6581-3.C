#include<stdio.h>
#include<stdio.h>

main()
{
	char z;
	clrscr();
		printf("Enter any character :");
		scanf("%c",&z);
		if(z=='a'||z=='e'||z=='o'||z=='u'||z=='A'||z=='E'||z=='O|'||z=='U'||z=='i'||z=='I')
		{
			printf("%c is vowel",z);
		}
		else
		{
			printf("%c is console",
			z);
		}
	getch();
}