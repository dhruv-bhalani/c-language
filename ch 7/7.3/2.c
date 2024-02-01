#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();
			printf("Press 1 for English\n");
			printf("Press 2 for Hindi\n");
			printf("Press 3 for Gujarati\n\n");
			
			printf("press number :");
			scanf("%d",&a);
			
	 switch (a)
	 {
	 
	 
	 			case 1:
	 					printf("press 1 for Internet Recharge\n");
	 					printf("Press 2 for Top-up Recharge\n");
	 					printf("Press 3 for Special Recharge\n\n");
	 					printf("press number :");
						scanf("%d",&a);
	 					switch(a)
	 			  	{
	 					
					 
						case 1:
						 		printf(" for Internet Recharge");
						 		break;
					    case 2:
						 		printf("for Top-up Recharge");
						 		break;
						case 3:
						 		printf("for Special Recharge");
						 		break;
					}
					break;
				case 2:	
						printf("Internet Recharge ke liye 1 dabaiye\n");
	 					printf("Top-up Recharge ke liye 2 dabaiye\n");
	 					printf("Special Recharge ke liye 3 dabaiye\n\n");

	 					printf("press number :");
						scanf("%d",&a);
							switch(a)
	 			  	{
	 					
					 
						case 1:
						 		printf("Internet Recharge ke liye 1 dabaiye ");
						 		break;
					    case 2:
						 		printf("Top-up Recharge ke liye 2 dabaiye");
						 		break;
						case 3:
						 		printf("Special Recharge ke liye 3 dabaiye");
						 		break;
					}
					break;
				case 3:	
						printf("Internet Recharge mate 1 dabavo\n");
	 					printf("Top-up Recharge mate 2 dabavo\n");
	 					printf("Special Recharge mate 3 dabavo\n\n");

	 					printf("press number :");
						scanf("%d",&a);
							switch(a)
	 			  	{
	 					
					 
						case 1:
						 		printf("Internet Recharge mate 1 dabavo ");
						 		break;
					    case 2:
						 		printf("Top-up Recharge mate 2 dabavo");
						 		break;
						case 3:
						 		printf("Special Recharge mate 3 dabavo");
						 		break;
					}
					break;

       }
	getch();		
}
