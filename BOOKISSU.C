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
}bi;
struct book
{
	int iCode;
	char acTitle[15];
	char acAuthor[15];
	int inoc;
}bb1;
void fnIssueBook()
{
	int BC,f,flag=0,count;
	struct dosdate_t d;

	FILE *fp,*f1;
	pnr();
	fp=fopen("book","r");
	f1=fopen("bookissue","w+");
	printf("Enter the book code\n");
	scanf("%d",&BC);
	_dos_getdate(&d);
	flag=0;
	while(fread(&bb1,sizeof(bb1),1,fp))
	{        printf("\n%d,bc=%d",bb1.iCode,BC);

		if(bb1.iCode==BC)
		{       printf("***%d",bb1.iCode);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nBook code is not valid");
		printf("\nPlease Re-enter the code");
		getch();
		fnIssueBook();
	}
	while(fread(&bi,sizeof(bi),1,f1)==1)
	{
		if(BC==bi.iBookCode)
			if(bi.cStatus=='B')
				count++;
	}
	while(fread(&bb1,sizeof(bb1),1,fp)==1)
	{
		if(BC==bb1.iCode)
			break;
	}
	if(bb1.inoc>count)
	{
		printf("\nThe Book is availble\n");
		printf("\nEnter the Employee Code:");
		scanf("%d",&bi.iEmployeeCode);
		bi.DOI_dd=d.day;
		bi.DOI_mm=d.month;
		bi.DOI_yy=d.year;
		if((bi.DOI_dd+12)>30)
		{
			bi.DOR_dd=(bi.DOI_dd+12)%30;
			bi.DOR_mm=(bi.DOI_mm+1);
		}
		else
		{
			bi.DOR_dd=bi.DOR_dd+12;
		}
		if(bi.DOR_mm>12)
		{
			bi.DOR_mm=1;
			bi.DOR_yy=bi.DOI_yy+1;
		}
		else
		{
			bi.DOR_mm=bi.DOI_mm;
			bi.DOR_yy=bi.DOI_yy;
		}
		bi.cStatus='B';
		fwrite(&bi,sizeof(bi),1,f1);
		printf("\nBook is issued successfully");
	}
	else
		printf("Book is not available");

}