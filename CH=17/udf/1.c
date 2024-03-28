#include<stdio.h>

int reverse(int a,int rem,int rev);

void main()
{
	int a,r;
	printf("Enter Any Number : ");
	scanf("%d",&a);	
	
	r = reverse(a,0,0);
	printf("Reverse : %d",r);
}

int reverse(int a,int rem,int rev)
{
	if(a==0)
	{
		return rev;
	}
	else
	{
		rem = a%10;
		rev = rev*10+rem;
		a/=10;
		
		reverse(a,rem,rev);
	}
}
