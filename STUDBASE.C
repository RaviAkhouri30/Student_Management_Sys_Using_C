#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<process.h>
struct record
{
int roll;
char name[50];
float marks;
}s;

void box()
{
int n,i1,i2;
gotoxy(23,5);
putchar(218);
for(i1=24;i1<=52;i1++)
  {
  gotoxy(i1,5);
  putchar(196);
  }
gotoxy(53,5);
putchar(191);

for(i2=6;i2<=12;i2++)
	{
	gotoxy(23,i2);
	putchar(179);
	}
for(i2=6;i2<=12;i2++)
	{
	gotoxy(53,i2);
	putchar(179);
	}
gotoxy(23,12);
putchar(192);
gotoxy(53,12);
putchar(217);

for(i1=24;i1<=52;i1++)
  {
 gotoxy(i1,12);
 putchar(196);
  }
for(i1=24;i1<=52;i1++)
  {
 gotoxy(i1,7);
 putchar(196);
  }
}

void box1()
  {
	int n,i1,i2;
gotoxy(28,9);
putchar(218);

for(i1=29;i1<=49;i1++)
  {
  gotoxy(i1,9);
  putchar(196);
  }
gotoxy(50,9);
putchar(191);
for(i2=10;i2<=12;i2++)
	{
	gotoxy(28,i2);
	putchar(179);
	}
for(i2=10;i2<=12;i2++)
	{
	gotoxy(50,i2);
	putchar(179);
	}
gotoxy(28,13);
putchar(192);
gotoxy(50,13);
putchar(217);

for(i1=29;i1<=49;i1++)
  {
 gotoxy(i1,13);
 putchar(196);
  }
  gotoxy(29,12);
  printf("                     ");
 }

 void box2()
	{
	int i;
	gotoxy(4,22);
	putchar(218);
	 for(i=5;i<=38;i++)
		{
		gotoxy(i,22);
		putchar(196);
		}
	gotoxy(39,22);
	putchar(191);
	  for(i=23;i<=24;i++)
		{
		gotoxy(39,i);
		putchar(179);
		}
	 gotoxy(39,25);
	 putchar(217);
		for(i=38;i>=5;i--)
		 {
		 gotoxy(i,25);
		 putchar(196);
		 }
	  gotoxy(4,25);
	  putchar(192);
		 for(i=24;i>=23;i--)
		  {
		  gotoxy(4,i);
		  putchar(179);
		  }
	}

void box4()
	{
	int i;
	gotoxy(25,2);
	putchar(201);
	 for(i=26;i<=50;i++)
		{
		gotoxy(i,2);
		putchar(205);
		}
	gotoxy(51,2);
	putchar(187);
	  for(i=3;i<=4;i++)
		{
		gotoxy(51,i);
		putchar(186);
		}
	 gotoxy(51,5);
	 putchar(188);
		for(i=50;i>=26;i--)
		 {
		 gotoxy(i,5);
		 putchar(205);
		 }
	  gotoxy(25,5);
	  putchar(200);
		 for(i=4;i>=3;i--)
		  {
		  gotoxy(25,i);
		  putchar(186);
		  }
	}

void box7()
	{
	int i;
	gotoxy(25,7);
	putchar(201);
	  for(i=26;i<=50;i++)
		{
		gotoxy(i,7);
		putchar(205);
		}
	gotoxy(51,7);
	putchar(187);
		{
		gotoxy(51,8);
		putchar(186);
		gotoxy(27,8);
		printf("1.New Entry");
		}
	 gotoxy(51,9);
	 putchar(185);
		for(i=50;i>=26;i--)
		 {
		 gotoxy(i,9);
		 putchar(205);
		 }
	  gotoxy(25,9);
	  putchar(204);
		{
		 gotoxy(25,8);
		 putchar(186);
		}
		{
		 gotoxy(25,10);
		 putchar(186);
		}
		{
		 gotoxy(51,10);
		 putchar(186);
		}
		{
		 gotoxy(51,11);
		 putchar(185);
		}
		{
		 gotoxy(25,11);
		 putchar(204);
		}
	 for(i=50;i>=26;i--)
		 {
		 gotoxy(i,11);
		 putchar(205);
		 }
	  gotoxy(27,10);
	  printf("2.Read your Records");
		 {
		 gotoxy(25,12);
		 putchar(186);
		 }
		 {
		 gotoxy(51,12);
		 putchar(186);
		 }
		 {
		 gotoxy(51,13);
		 putchar(185);
		 {
		 gotoxy(25,13);
		 putchar(204);
		 }
		 }
	 for(i=50;i>=26;i--)
		 {
		 gotoxy(i,13);
		 putchar(205);
		 }
	  gotoxy(27,12);
	  printf("3.Modify your Entry");
		 {
		 gotoxy(51,14);
		 putchar(186);
		 }
		 {
		 gotoxy(25,14);
		 putchar(186);
		 }
		 {
		 gotoxy(51,15);
		 putchar(185);
		 }
		 {
		 gotoxy(25,15);
		 putchar(204);
		 }
	  for(i=50;i>=26;i--)
		 {
		 gotoxy(i,15);
		 putchar(205);
		 }
	  gotoxy(27,14);
	  printf("4.Delete your Record");
		 {
		 gotoxy(51,16);
		 putchar(186);
		 }
		 {
		 gotoxy(25,16);
		 putchar(186);
		 }
		 {
		 gotoxy(25,17);
		 putchar(200);
		 }
		 {
		 gotoxy(51,17);
		 putchar(188);
		 }
	  for(i=50;i>=26;i--)
		 {
		 gotoxy(i,17);
		 putchar(205);
		 }
		 {
		 gotoxy(27,16);
		 printf("5.Exit");
		 }
	}

	void box8()
	{
	int i;
	gotoxy(30,3);
 printf("Student Database");
 gotoxy(30,4);
 printf("****************");
	gotoxy(25,7);
	putchar(201);
	  for(i=26;i<=50;i++)
		{
		gotoxy(i,7);
		putchar(205);
		}
	gotoxy(51,7);
	putchar(187);
		{
		gotoxy(51,8);
		putchar(186);
		gotoxy(27,8);
		printf("1.Roll No.");
		gotoxy(39,8);
		printf(":");
		gotoxy(39,10);
		printf(":");
		gotoxy(39,12);
		printf(":");
		gotoxy(39,14);
		}
	 gotoxy(51,9);
	 putchar(185);
		for(i=50;i>=26;i--)
		 {
		 gotoxy(i,9);
		 putchar(205);
		 }
	  gotoxy(25,9);
	  putchar(204);
		{
		 gotoxy(25,8);
		 putchar(186);
		}
		{
		 gotoxy(25,10);
		 putchar(186);
		}
		{
		 gotoxy(51,10);
		 putchar(186);
		}
		{
		 gotoxy(51,11);
		 putchar(185);
		}
		{
		 gotoxy(25,11);
		 putchar(204);
		}
	 for(i=50;i>=26;i--)
		 {
		 gotoxy(i,11);
		 putchar(205);
		 }
	  gotoxy(27,10);
	  printf("2.Name");
		 {
		 gotoxy(25,12);
		 putchar(186);
		 }
		 {
		 gotoxy(51,12);
		 putchar(186);
		 }
		 {
		 gotoxy(51,13);
		 putchar(185);
		 {
		 gotoxy(25,13);
		 putchar(204);
		 }
		 }
	 for(i=50;i>=26;i--)
		 {
		 gotoxy(i,13);
		 putchar(205);
		 }
	  gotoxy(27,12);
	  printf("3.CGPA");
		 {
		 gotoxy(51,14);
		 putchar(186);
		 }
		 {
		 gotoxy(25,14);
		 putchar(186);
		 }
	  gotoxy(51,15);
	  putchar(188);
	  gotoxy(25,15);
	  putchar(200);
	for(i=50;i>=26;i--)
		 {
		 gotoxy(i,15);
		 putchar(205);
		 }
	}


	void box5()
	{
	int i;
	gotoxy(30,22);
	putchar(218);
	 for(i=31;i<=70;i++)
		{
		gotoxy(i,22);
		putchar(196);
		}
	gotoxy(71,22);
	putchar(191);
	  for(i=23;i<=24;i++)
		{
		gotoxy(71,i);
		putchar(179);
		}
	 gotoxy(71,25);
	 putchar(217);
		for(i=70;i>=31;i--)
		 {
		 gotoxy(i,25);
		 putchar(196);
		 }
	  gotoxy(30,25);
	  putchar(192);
		 for(i=24;i>=23;i--)
		  {
		  gotoxy(30,i);
		  putchar(179);
		  }
	}

	void box6()
	{
	int i;
	gotoxy(5,22);
	putchar(218);
	 for(i=6;i<=36;i++)
		{
		gotoxy(i,22);
		putchar(196);
		}
	gotoxy(36,22);
	putchar(191);
	 for(i=23;i<=24;i++)
		{
		gotoxy(36,i);
		putchar(179);
		}
	gotoxy(36,25);
	putchar(217);
	 for(i=35;i>=5;i--)
		 {
		 gotoxy(i,25);
		 putchar(196);
		 }
	  gotoxy(5,25);
	  putchar(192);
		 for(i=24;i>=23;i--)
		  {
		  gotoxy(5,i);
		  putchar(179);
		  }
	}

void password()
{
char pass[50],p,cha[]="Press y to retry and n to exit.",cha1[]="Wrong Password";
int i=0,j;
char d;
  {
	 gotoxy(38,9);
		do
		 {
		 p=getch();
		 putchar('*');
		 pass[i]=p;
		 i++;
		 }
		 while(p!=13);
		 pass[i-1]='\0';
	 if(strcmp(pass,"ravi")==0)
		{
		box1();
		gotoxy(34,10);
		printf("Logging in");
		gotoxy(31,12);
		printf("please wait");
		gotoxy(43,12);
			for(j=0;j<5;j++)
				{
				putchar('.');
				delay(400);
				}
		}
		else
		{
		box2();
		gotoxy(6,23);
		puts(cha1);
		gotoxy(6,24);
		puts(cha);
		d=getch();
			if(d=='y')
			 {
			  gotoxy(38,9);
			  printf("      ");
			  password();
			  fflush(stdin);
			 }
			else
			 {
			  exit(0);
			 }
		}
  }
}

void lock()
{
char str[25]="Ravi",s[25],s1[50]="Welcome!Ravi Akhouri";
char ch;
char pass[40];
char p;
int i;
gotoxy(35,6);
printf("Welcome!");

gotoxy(27,8);
puts("User");
gotoxy(37,8);
puts(":");

gotoxy(27,9);
printf("Password");
gotoxy(37,9);
puts(":");

gotoxy(38,8);
gets(s);
gotoxy(38,9);

if(strcmp(str,s)==0)
 {
gotoxy(30,15);
for(i=0;i<=19;i++)
			{
			 printf("%c",s1[i]);
			 delay(100);
			}
 gotoxy(30,15);
 gotoxy(30,16);
 for(i=0;i<=19;i++)
			{
			putchar(205);
			delay(50);
			}
 }
 else
 {
 box6();
 gotoxy(6,23);
 printf("User not found!");
 gotoxy(6,24);
 printf("Press y to Retry or n to exit");
 ch=getche();
  if(ch=='y')
	 {
	 gotoxy(38,8);
	 printf("          ");
	 gotoxy(6,23);
	 printf("               ");
	 gotoxy(6,24);
	 printf("                              ");
	 lock();
	 }
  else
	 {
	 exit(0);
	 }
 }
}

void mod()
 {
  FILE *fp1, *fp2;
  int roll;
  int flag=0;
  fp1=fopen("std2.ra","rb");
  fp2=fopen("temp.dat","wb");

 printf("Roll no.:");
 scanf("%d", &roll);

	while(fread(&s,sizeof(s),1,fp1)==1)
	{
	 if(roll==s.roll)
		{
		printf("\nEnter New Data\n");
		printf("\nRoll No.:");
		scanf("%d",&s.roll);
		fflush(stdin);
		puts("\nName:");
		gets(s.name);
		fflush(stdin);
		printf("\nCGPA:");
		scanf("%f",&s.marks);
		fwrite(&s,sizeof(s),1,fp2);
		flag=1;
		}
	 else
	 {
		  fwrite(&s,sizeof(s),1,fp2);
	 }

	 }
	  if(flag==0)
	{
		printf("\nRoll no. not found");
		getch();
	}
	  else
		printf("\nRecord Modified....");
		getch();
		fclose(fp1);
		fclose(fp2);
		remove("std1.ra");
		rename("temp.dat","std1.ra");
}

void dele()
 {
  FILE *fp1, *fp2;
  int roll;
  int flag=0;
  fp1=fopen("std1.ra","rb");
  fp2=fopen("temp.dat","wb");

 printf("Roll no.:");
 scanf("%d", &roll);

	while(fread(&s,sizeof(s),1,fp1)==1)
	{
	 if(roll==s.roll)
		{
		 flag=1;
		}
	 else
	 {
		  fwrite(&s,sizeof(s),1,fp2);
	 }
	 }
	  if(flag==0)
	{
		printf("\nRoll no. not found");
		getch();
	}
	  else
		printf("\nRecord Deleted....");
		getch();
		fclose(fp1);
		fclose(fp2);
		remove("std1.ra");
		rename("temp.dat","std1.ra");
}

void input()
{
 int i,n;
 FILE *fp;
 fp=fopen("std1.ra","ab+");
 if(fp==NULL)
 {
	printf("Error");
	getch();
	exit(0);
 }
 box5();
 printf("Enter the no of record to be written: ");
 scanf("%d",&n);
 box8();

for(i=1;i<=n;i++)
  {
  gotoxy(40,8);
  scanf("%d",&s.roll);
  fflush(stdin);
  gotoxy(40,10);
  gets(s.name);
  fflush(stdin);
  gotoxy(40,12);
  scanf("%f",&s.marks);
  fflush(stdin);
  fwrite(&s,sizeof(s),1,fp);
  }
  fclose(fp);
  }
void output()
 {
 FILE *fp;
 fp=fopen("std1.ra","rb+");
 if(fp==NULL)
 {
 printf("Error");
 exit(0);
 }
  printf("\n Roll No.\t Name\t\t\t CGPA");
  while(fread(&s,sizeof(s),1,fp)==1)
  {
  printf("\n%5d \t\t %-20s\t %2.2f\n",s.roll,s.name,s.marks);
  }
  getch();
  fclose(fp);
 }

void box3()
	{
	int i;
	gotoxy(4,22);
	putchar(218);
	 for(i=5;i<=30;i++)
		{
		gotoxy(i,22);
		putchar(196);
		delay(70);
		}
	gotoxy(31,22);
	putchar(191);
	  for(i=23;i<=24;i++)
		{
		gotoxy(31,i);
		putchar(179);
		delay(70);
		}
	 gotoxy(31,25);
	 putchar(217);
		for(i=30;i>=5;i--)
		 {
		 gotoxy(i,25);
		 putchar(196);
		 delay(70);
		 }
	  gotoxy(4,25);
	  putchar(192);
		 for(i=24;i>=23;i--)
		  {
		  gotoxy(4,i);
		  putchar(179);
		  delay(70);
		  }
	}

void main()
{
int choice,i,l,j,k,m=-2,l1,l3;
char str1[]="Rsoft Technology",str2[]="Welcome to the Student Database",str3[]="ver 1.0";
clrscr();
box();
l=strlen(str1);
l1=strlen(str3);
l3=strlen(str2);
gotoxy(30,2);
for(i=0;i<l;i++)
		{
		printf("%c",str1[i]);
		delay(100);
		}
		gotoxy(34,4);
 for(i=0;i<l1;i++)
		{
		printf("%c",str3[i]);
		}
 gotoxy(30,3);
 for(i=0;i<l;i++)
	{
	putchar(205);
	delay(40);
	}
	gotoxy(55,21);
	printf("developed by Ravi Akhouri");
 lock();
 password();
 gotoxy(24,19);
 for(i=0;i<=l3;i++)
 {
	printf("%c",str2[i]);
	delay(100);
 }
 gotoxy(24,20);
 for(i=0;i<=l3;i++)
 {
 putchar(205);
 }
 gotoxy(5,17);
 printf("Loading...");

 for(j=16;j<=66;j++)
 {
 m=m+2;
 gotoxy(j,17);
 putchar(178);
 gotoxy(67,17);
 printf("%d",m);
 putchar(37);
 delay(60);
 }

 do
 {
 clrscr();
 gotoxy(30,3);
 printf("Student Database");
 gotoxy(30,4);
 printf("****************");
 box4();
 box7();
 box3();
 gotoxy(5,23);
 printf("Enter your choice : ");
 fflush(stdin);
 scanf("%d",&choice);

  switch(choice)
	{
	case 1:	clrscr();
				box4();
				input();
				gotoxy(26,14);
				printf("Records saved sucessfully");
				getch();
				fflush(stdin);
				break;
	case 2:	clrscr();
				output();
				fflush(stdin);
				break;
	case 3:	clrscr();
				mod();
				break;
	case 4:	clrscr();
				dele();
				break;
	case 5:  exit(0);
	default: clrscr();
				printf("Wrong Choice");
				getch();
				break;
	}
  }while(choice!=5);
getch();
}


