#include<stdio.h>

main()
{
	int n,rem,rev=0,a;
	
	printf("enter any number : ");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		rem = n%10;
		rev = rev*10+rem ;
		n /= 10;
	}
    printf("Reverse %d",rev);
}