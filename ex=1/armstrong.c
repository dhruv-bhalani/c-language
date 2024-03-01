#include<stdio.h>

main()
{
	int n,rem,m=0,a;
	
	printf("enter any number : ");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		rem = n%10;
		m += rem*rem*rem;
		n /= 10;
	}
	
	if(a==m)
	{
		printf("%d is an armstrong number",a);
		
	}
	else
	{
		printf("not armstrong");
	}

}