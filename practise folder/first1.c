#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
  FILE *fp,*ft;
  char another,choice;
  struct emp
  {
     char name[40];
     int age;
     float bs;
  };
  struct emp e;
  char empname[40];
  long int recsize;
  fp=fopen("EMP.dat","rb+");
  if(fp==NULL)
  {
      fp=fopen("EMP.dat","wb+");
      if(fp==NULL)
      {
	  puts("Can not open File");
	  exit(1);
      }
  }
  recsize=sizeof(e);
  while(1)
  {
	// clrscr();
	gotoxy(30,10);
	printf("1.Add Records");
	gotoxy(30,12);
	printf("2.List Records");
	gotoxy(30,14);
	printf("3.Modify Records");
	gotoxy(30,16);
	printf("4.Delete Records");
	gotoxy(30,18);
	printf("0.Exit");
	gotoxy(30,20);
	printf("Enter Your Choice=");
	flushall();
	choice=getche();

	switch(choice)
	{
	    case '1':
		    fseek(fp,0,SEEK_END);
		    another='Y';
		    while(toupper(another)=='Y')
		    {
		       printf("\nEnter the name,age and basic Sal=");
		       gets(e.name);
		       scanf("%d",&e.age);
		       scanf("%f",&e.bs);
		       fwrite(&e,recsize,1,fp);
		       flushall();
		       printf("\nAdd Another Record(Y/N)=");
		       another=getch();
		    }
		    break;
	    case '2':
		     rewind(fp);
		     printf("\n%-20s%3s %s","Name","Age","Basic Salary");

		     while(fread(&e,recsize,1,fp)==1)
		     {
			 printf("\n%-20s%3d%9.2f",e.name,e.age,e.bs);
		     }
		     getch();
		     break;
	    case '3':
		     another='Y';
		     while(toupper(another)=='Y')
		     {
		       printf("\nEnter the name of Employee to modify=");
		       gets(empname);
		       rewind(fp);
		       while(fread(&e,recsize,1,fp)==1)
		       {
			   if(strcmpi(e.name,empname)==0)
			   {
			       printf("\nEnter the name,age and basic Sal=");
			       gets(e.name);
			       scanf("%d",&e.age);
			       scanf("%f",&e.bs);
			       fseek(fp,-recsize,SEEK_CUR);
			       fwrite(&e,recsize,1,fp);
			       break;
			   }
		       }
			   flushall();
			   printf("\nModify Another Record(Y/N)=");
			   another=getch();
		     }
		     break;
	    case '4':
		     another='Y';
		     while(toupper(another)=='Y')
		     {
		       printf("\nEnter the name of Employee to modify=");
		       gets(empname);
		       ft=fopen("TEMP.dat","wb");
		       rewind(fp);
		       while(fread(&e,recsize,1,fp)==1)
		       {
			   if(strcmpi(e.name,empname)!=0)
			   {
			       fwrite(&e,recsize,1,ft);
			   }
		       }
		       fclose(fp);
		       fclose(ft);
		       remove("EMP.dat");
		       rename("TEMP.dat","EMP.dat");

		       fp=fopen("EMP.dat","rb+");
		       printf("\nDelete Another Record(Y/N)=");
		       flushall();
		       another=getch();
		     }
		     break;
	    case '0':
		     exit(1);
	}//End of Switch();
  }//End of While(1);
}//End of Main();
