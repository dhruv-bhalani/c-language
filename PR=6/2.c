#include<stdio.h>

main()
{
	char Words[20];
	int i,j,c=1;
	
	printf("Enter Any Words : ");
	scanf("%[^\n]",&Words);
	
	int n=strlen(Words);
	strlwr(Words);
	
	for(i=0;i<n;i++)
	{
		if(Words[i]!='\0')
		{	c=1;
			for(j=i+1;j<n;j++)
			{
				if(Words[i]== Words[j])
				{
					Words[j]='\0';
					c++;
				}
			}
			printf("%c => %d\n",Words[i],c);
		}
		
	}
}
