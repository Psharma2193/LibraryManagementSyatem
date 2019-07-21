
/***********************************************************************
File Name	: fnMenu2
Description	: Displays the Employ Master Maintenance menu and Directs the user to 		  their respective pages.
Author 		: Technovores
Version		:1.1
Date		:02-04-2014
************************************************************************/
void fnMenu2()
{
	int ichoice;
	clrscr();
	pnr();
	gotoxy(20,7);
	printf("Employee Master Maintenance Menu");
	gotoxy(20,8);
	printf("===============================");
	gotoxy(20,9);
	printf("1.Add Employee");
	gotoxy(20,10);
	printf("2.Update Employee Category");
	gotoxy(20,11);
	printf("3.View All Employee details");
	gotoxy(20,12);
	printf("4.Goto Main Menu ");
	gotoxy(20,13);
	printf("Enter Your Choice  ");
	gotoxy(40,13);
	scanf("%d",&ichoice);
	switch(ichoice)
	{	case 1:	fnAddEmployeeDetails();
			break;
		case 2:	fnUpdateEmployeeDetails();
			break;
		case 3:	fnDisplayEmployeeDetails();
			break;
		case 4:	fnMainMenu();
			break;
		default: printf("error");
			break;
	}
}


