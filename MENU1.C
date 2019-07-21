
/***********************************************************************
File Name	: fnMenu1
Description	: Displays the Book Master Maintanenance Menu and Directs the user to their respective 		  options.
Author 		: Technovores
Version		: 1.1
Date		: 02-04-2014
************************************************************************/

void fnMenu1()
{
	int choice;
	clrscr();
	pnr();
	gotoxy(20,7);
	printf("Book Master Maintainenance Menu");
	gotoxy(20,8);
	printf("===============================");
	gotoxy(20,9);
	printf("1. Add Books ");
	gotoxy(20,10);
	printf("2. Update Number Of Copies");
	gotoxy(20,11);
	printf("3. Print book Details");
	gotoxy(20,12);
	printf("4. Go To Main Menu");
	gotoxy(20,13);
	printf("Enter your choice  ");
	gotoxy(40,13);
	scanf("%d",&choice);
	switch(choice)
	{	case 1:	fnAddBook();
			break;
		case 2:	fnUpdateBook();
			break;
		case 3:	fnPrintBookList();
			break;
		case 4:	fnMainMenu();
			break;
		default:printf("error");
	}
}



