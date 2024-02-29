#include<stdio.h>

main()
{
	int i,c;
	
	printf("Enter Size of array : ");
	scanf("%d",&c);
	int a[c];
	
	printf("\n\n");
	for(i=0;i<c;i++)
	{
		printf("Enter Value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n--:  The Squares  :--\n ");
	for(i=0;i<c;i++)
	{
		printf("%d\t ",a[i]*a[i]);
	}
}

