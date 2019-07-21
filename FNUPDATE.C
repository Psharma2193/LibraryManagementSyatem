/***********************************************************************
File Name	: fnUpdateBook
Description	: This function is used to update the reccors of the book.
Author 		: Technovores
Version		: 1.1
Date		: 02-04-2014
************************************************************************/

#include<stdio.h>

struct emp
{
	int iEmployeeCode;
	char acEmployeeName[20];
	char cEmployeeCategory;


};
struct emp e4;

void fnUpdateEmployeeDetails()
{
//	FILE *noc;
	int icode=0,iFlag=0,temp;
	char c;
	FILE *f,*ff;
	char file[40];
	long int recsize;
	clrscr();
	pnr();
	gotoxy(24,10);
	printf("Employee Update Content...");
	gotoxy(24,11);
	printf("=======================");
	gotoxy(24,12);
	printf("Enter Employee Code:");
	gotoxy(45,12);
	scanf("%d",&temp);
	f=fopen("book","a");
	if(f==NULL)
	{ 		puts("File Not Found !!!");
			getch();
			return;
	}
	while(fread(&e4,sizeof(e4),1,f)==1)
	{
		if(e4.iEmployeeCode==temp)
		{       if(e4.cEmployeeCategory=='t')
				e4.cEmployeeCategory=='p';
			else
			{
				printf("\nCannot update the category");
				return;
			}
		}
	}
	getch();
	fseek(f,-sizeof(e4),SEEK_CUR);
	fwrite(&e4,sizeof(e4),1,f);

	fclose(f);

}
