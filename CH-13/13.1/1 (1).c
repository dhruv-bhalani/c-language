#include<stdio.h>

main()
{
	int m,i;
	
	printf("Enter Size of Arryay : ");
	scanf("%d",&m);
	int a[m];
	
	for(i=0;i<m;i++)
	{
		printf("\nEnter Value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n--|--Array--|--\n\n");
	
	for(i=0;i<m;i++)
	{
		printf("\na[%d] : %d\n",i,a[i]);
	}
	
	printf("\nLength of Array is : %d",m);
}
