/***********************************************************************
File Name	: fnMenu3
Description	: Displays the Book issue menu and Directs the user to 		  		  their respective pages.
Author 		: Technovores
Version		:1.1
Date		:02-04-2014
************************************************************************/

void fnMenu3()
{
	int ichoice;
	clrscr();
	pnr();
	gotoxy(27,7);
	printf("Book Issue Menu");
	gotoxy(27,8);
	printf("==================");
	gotoxy(25,9);
	printf("1. Issue book");
	gotoxy(25,10);
	printf("2. Return book");
	gotoxy(25,11);
	printf("3. Go to main menu");
	gotoxy(25,12);
	printf("Enter the choice ");
	gotoxy(45,12);
	scanf("%d",&ichoice);
	switch(ichoice)
	{	case 1:	fnIssueBook();
			break;
		case 2:	fnReturnBook();
			break;
		case 3:	fnMainMenu();
			break;
		default:printf("Error \n");
	}
}