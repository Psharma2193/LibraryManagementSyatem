
/***********************************************************************
File Name	: fnMenu4
Description	: Displays the Report menu and Directs the user to 		  		  their respective pages.
Author 		: Technovores
Version		:1.1
Date		:02-04-2014
************************************************************************/

void fnMenu4()
{
	int ichoice;
	clrscr();
	pnr();
	gotoxy(27,7);
	printf("Report Menu \n");
	gotoxy(27,8);
	printf("=========== \n\n ");
	gotoxy(25,9);
	printf("1. Frequently issued Books Report");
	gotoxy(25,10);
	printf("2. Display Borrowed Books ");
	gotoxy(25,11);
	printf("3. Search book by title ");
	gotoxy(25,12);
	printf("4. Go to main menu");
	gotoxy(25,13);
	printf("Enter the choice  ");
	gotoxy(45,13);
	scanf("%d",&ichoice);
	switch(ichoice)
	{	case 1:	fnFrequentlyIssuedBooksReport();
			break;
		case 2:	//fnDisplayBorrowedBooks();
			break;
		case 3:	fnSearchBookByTitle();
			break;
		case 4:	fnMainMenu();
			break;
		default:      printf("Error \n");
	}
}