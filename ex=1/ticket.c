#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int n,x,y,c=0;
	clrscr();
	
	P("!! Welcome to RAJHANS !!\n");
	P("\n\n1. for Hollywood\n");
	P("2. for Bollywood\n");
	P("3. for Tollywood\n\n");
	
	P("Enter your choiice :");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for annabelle\n");
					P("2. for The Conjuring\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: annabelle \n");
							P("Prize\t\t: 300 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");
							P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: The Conjuring\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. for GET HARD\n");
					P("2. for BAD\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: GET HARD\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");		
							P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: BAD\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. for PARASITE\n");
					P("2. for THE NEXT THREE DAYS\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: PARASITE\n");
							P("Prize\t\t: 550 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: THE NEXT THREE DAYS\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		case 2:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for LAXMII\n");
					P("2. for ROOHI\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: LAXMII\n");
							P("Prize\t\t: 200 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: ROOHI\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. for HUNGAMA 2\n");
					P("2. for 3 Idiots\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t:HUNMAMA 2\n");
							P("Prize\t\t: 600 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: 3 Idiots\n");
							P("Prize\t\t: 550 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. for MOM\n");
					P("2. for SHREE\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: MOM \n");
							P("Prize\t\t: 500 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: SHREE\n");
							P("Prize\t\t: 300 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		case 3:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for ANTI CHRIST\n");
					P("2. for IT\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: ANTIN CHRIST\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
						 	P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: IT\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. THE OTHER GUYS\n");
					P("2. for BAD TEACHER\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: THE OTHER GUYS\n");
							P("Prize\t\t: 350 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: BAD TEACHER\n");
							P("Prize\t\t: 300 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. THE PRESTIGE\n");
					P("2. for NIGHT CRAWLER\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: THE PRESTIGE\n");
							P("Prize\t\t: 300 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							P("\n\nMovie\t\t: NIGHT CRAWLER\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&x);
							P("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							P("==========================");	
							P("\n\n!! THANK YOU  !!");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		default:
			P("\n\n!! Invalid Input,Please Try Again !!");
	}
	getch();
}
