#include<stdio.h>
#include<conio.h>
#include<dos.h>
struct bookisseue
{
	int iBookCode;
	int iEmployeeCode;
	int DOI_dd;
	int DOI_mm;
	int DOI_yy;
	char cStatus;
	int DOR_dd;
	int DOR_mm;
	int DOR_yy;
}bi1;
void fnReturnBook()
{
	FILE *f2;
	struct dosdate_t d1;
	int BC1,EC1;//,f2=0;
	_dos_getdate(&d1);
	f2=fopen("bookissue.txt","r+");
	if(f2==NULL)
	{
		printf("\nNo book has been issued");
	      getch();
	      fnMenu3(); //	fnIssue();
	}
	printf("\nEnter the Book Code:");
	scanf("%d",&BC1);
	printf("\nEnter the Employee Code:");
	scanf("%d",&EC1);
	while(fread(&bi1,sizeof(bi1),1,f2)==1)
	{
		if(bi1.iBookCode==BC1&&bi1.iEmployeeCode==EC1)
		{
			if(bi1.cStatus=='B')
			{
				bi1.cStatus='R';
				bi1.DOR_dd=d1.day;
				bi1.DOR_mm=d1.month;
				bi1.DOR_yy=d1.year;
			       //	fnIssueBook();
				fwrite(&bi1,sizeof(bi1),1,f2);
				fnMenu3();
			}
			else
			{
				printf("\nThe book is not borrowed");
				getch();
				fnMenu3();
			}
		}
		else
		{
			printf("\nBook is not issued");
		}
	}
}