#include<stdio.h>

main()
{
	int m,i,sum=0;
	
	printf("Enter Size of Arryay : ");
	scanf("%d",&m);
	int a[m];
	
	for(i=0;i<m;i++)
	{
		printf("\nEnter Value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n--|--Array--|--");
	
	for(i=0;i<m;i++)
	{
		printf("\n\na[%d] : %d\n",i,a[i]);
		sum += a[i];
	}
	printf("\n\nAverage of Array is : %d",sum/m);
}
