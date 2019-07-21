#include<stdio.h>
#include<conio.h>
#include<string.h>
struct bookisseue
{
	int iBookCode;
	int iEmployeeCode;
	int iDOI_dd;
	int iDOI_mm;
	int iDOI_yy;
	char cStatus;
	int iDOR_dd;
	int iDOR_mm;
	int iDOR_yy;
}bi2;
struct book
{
	int iCode;
	char acTitle[30];
	char acAuthor[20];
	int inoc;
}b5;
struct Employee
{
	int iEmployeeCode;
	char acEmployeeName[20];
	char cEmployeeCategory;
}e5;

void fnFrequentlyIssuedBooksReport()
{
	FILE *fp,*f1;
	long l1,l2;
	int count;
	clrscr();
	fp=fopen("book","r");
	f1=fopen("bookissue","r");
	if(fp==NULL)
	{
		printf("\nNo reports to display");
	}
	fseek(fp,0L,SEEK_END);
	l2=ftell(fp);
	rewind(fp);
	while(l2)
	{
		printf("ss");
		getch();
		count=0;
		fread(&b5,sizeof(b5),1,fp);
		fseek(f1,0L,SEEK_END);
		l1=ftell(f1);
		rewind(f1);
		while(l1)
		{
			fread(&bi2,sizeof(bi2),1,f1);
			if(b5.iCode==bi2.iBookCode)
			{
				count++;
			}
			l1-=(sizeof(bi2));
			if(count>5)
			{
				printf("BookId : \n",b5.iCode);
				printf("BookTitle : ");
				puts(b5.acTitle);
				printf("Book Author :");
				puts(b5.acAuthor);
			}
			l2-=(sizeof(b5));
		}
	}
}
void fnDisplayBorrowedBooks()
{


	long l,l1;
	int temp,iflag;
	FILE *f2,*f1;
	clrscr();
	f2=fopen("bookissue","rb+");
	f1=fopen("employee","rb+");
	if(f2==NULL)
	{
		printf("\nNo reports to display");
	}

	   fseek(f2,0L,SEEK_END);
	   l=ftell(f2);
	//printf("%ld",l);
	rewind(f2);

	while(l)
	{
	fread(&bi2,sizeof(bi2),1,f2); // && (fread(&e5,sizeof(e5),1,f1);
		iflag=0;
		if(bi2.cStatus=='B')
		{
			printf("BookCode : %d\n",bi2.iBookCode);
		       printf("Employee code :");
		       printf("%d",bi2.iEmployeeCode);
		       temp=bi2.iEmployeeCode;
			iflag=1;

		}
		if(iflag==1)
		{
			fseek(f1,0L,SEEK_END);
			l1=ftell(f1);
			//printf("%ld",l1);
			rewind(f1);
			while(l1)
			{
				fread(&e5,sizeof(e5),1,f1);
				if(temp==e5.iEmployeeCode)
				{
					printf("employee name:%s",e5.acEmployeeName);
					break;
				}
				l1=l1-23;
			}
		       //	printf("Date of issue : %d - %d -%d\n",bi2.iDOI_dd,bi2.iDOI_mm,bi2.iDOI_yy);
		}
	  l=l-17;
	  getch();

	}
       /*
	fseek(f1,0L,SEEK_END);
	 l=ftell(f1);
	printf("%ld",l);
	rewind(f1);

	while(l)
	{
	fread(&e5,sizeof(e5),1,f1);

	   if(temp==e5.iEmployeeCode)
	   {
	   printf("employee name:%s",e5.acEmployeeName);

	   }
	   l=l-sizeof(e5);
	}
       */
       fnMenu4();
}
/*void fnSearchBookByTitle()
{
	FILE *fp;
	char str[25];
	int flag=0;
	clrscr();
	fp=fopen("book.txt","r");
	if(fp==NULL)
	{
		printf("\n\t\t\tNo reports to display");
	}
	printf("\n\t\t\tEnter the BookTitle of Book to be searched\n");
	gets(str);
	while(fread(&b5,sizeof(b5),1,fp)==1)
	{
		if(strcmp(str,b5.acTitle)==0)
		{
			flag=1;
			printf("\n\t\t\tBookId : \n",b5.iCode);
			printf("\t\t\tBookTitle : ");
			puts(b5.acTitle);
			printf("\n\t\t\tBook Author :");
			puts(b5.acAuthor);
			printf("\n\t\t\tNumber Of Copies : ",b5.inoc);
		}
	}
	if(flag==0)
	{
		printf("\n\t\t\tError The Book was not found");
	}
	fnMenu4();
} */

