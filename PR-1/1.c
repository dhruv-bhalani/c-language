#include<stdio.h>

main()
{
	float F,C;
	printf("Enter temperature in celsius : ");
	scanf("%f",&C);
	
	F = (C*1.8)+32;
	
	printf("Temperature in Fahrenheit : %.2f",F);
}

