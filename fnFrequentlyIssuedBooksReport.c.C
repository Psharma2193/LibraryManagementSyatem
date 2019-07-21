/***********************************************************************
File Name	: fnFrequentlyIssuedBooksReport
Description	: This function is used to add the employee details.
Author 		: Technovores
Version		: 1.1
Date		: 02-04-2014
************************************************************************/
#include<stdio.h>
struct Book
{
	int iBookCode;
	char sBookTitle[25];
	char sBookAuthor[25];
	int iNoOfCopies;
	int iIssue;
}s2;
void fnFrequentlyIssuedBooksReport()
{
	FILE *fp;
	clrscr();
	fp=fopen("book.txt","r");
	if(fp==NULL)
	{
		printf("\nNo reports to display");
	}
	while(fscanf(fp,"%d%s%s%d",&s2.iBookCode,s2.sBookTitle,s2.sBookAuthor,&s2.iIssue)!=EOF)
	{
		if(s2.iIssue>5)
		{
			printf("BookId : \n",s2.iBookCode);
			printf("BookTitle : ");
			puts(s2.sBookTitle);
			printf("Book Author :");
			puts(s2.sBookAuthor);
		}
	}
	getch();
}