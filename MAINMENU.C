
/***********************************************************************
File Name	: fnMainMenu
Description	: Displays the main menu  and Directs the user to their respective 		  pages.
Author 		: Technovores
Version		: 1.1
Date		: 02-04-2014
************************************************************************/
void fnMainMenu()
{
	int ch;
	do
	{
		clrscr();
		pnr();
		gotoxy(28,7);
		printf("Main Menu");
		gotoxy(28,8);
		printf("=========");
		gotoxy(25,9);
		printf("1. Book master maintainenece");
		gotoxy(25,10);
		printf("2. Employee master maintainenece");
		gotoxy(25,11);
		printf("3. Book Issue");
		gotoxy(25,12);
		printf("4. Report");
		gotoxy(25,13);
		printf("5. Exit");
		gotoxy(25,14);
		printf("Enter your choice...\n  ");
		gotoxy(50,14);
		scanf("%d",&ch);
		switch(ch)
		{	case 1:		fnMenu1();
					break;
			case 2:	        fnMenu2();
					break;
			case 3:         fnMenu3();
					break;
			case 4:         fnMenu4();
					break;
			case 5:         gotoxy(55,16);
					printf("Now u will exit...");
					getch();
					exit(0);
					break;
			default:       	printf("Wrong Choice..");
		}
	}while(ch!=5);
}

