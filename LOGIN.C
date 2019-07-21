/***********************************************************************
File Name	: Login
Description	: Allows the user to enter user name ,password and Directs the 				  user to the main menu page.
Author 		: Technovores
Version		:1.1
Date		:02-04-2014
************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void pnr();

void main()
{
	char acUser[10],acPass[10],cTemp;
	int iTemp2=0,iTemp;
	clrscr();


	for(iTemp=0;iTemp<3;iTemp++)
	{

		pnr();
		gotoxy(30,8);
	/*	printf("Login Screen");
		gotoxy(30,9);
		printf("============");
		gotoxy(27,12);
		printf("Enter user id:");
		gotoxy(44,12);
		scanf("%s",&acUser);
		gotoxy(27,13);
		printf("Enter password: \n");
		gotoxy(44,13);
		while( (cTemp=getch())!=13)
		{
			acPass[iTemp2]=cTemp;
			printf("*");
			iTemp2++;
		}
	       //	acPass[iTemp2]=NULL;
	       //	printf("\n@@@%s",acPass);
		if( (strcmpi(acUser,"ipec123")==0) && (strcmp(acPass,"ipec123")==0) )
		   */	fnMainMenu();
	      //	else
		{
			gotoxy(27,17);
			printf("Login Denied...Re Enter the login details");
			gotoxy(27,18);
			printf("Attempts left %d",2-iTemp);
			gotoxy(44,12);	clreol();
			gotoxy(43,13);       clreol();
		}
	}
	getch();
}

void pnr()
{
   
	gotoxy(25,5);
	printf("Library Management System \n");
	gotoxy(25,6);

	printf("=========================");

}

/***************************************************************
	END OF FILE
***************************************************************/ 