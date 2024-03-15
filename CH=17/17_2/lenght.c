#include<stdio.h>

int length(char a[]);

void main()
{
	int len;
	char b[20];
	printf("Enter Any Word : ");
	gets(b);
	printf("Lenght Of Word : %d",lenght(b));
}

int  lenght(char b[])
{
	return strlen(b);
}
