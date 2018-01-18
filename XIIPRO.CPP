/*
******************************************************************************
		     HEADER FILE USED
******************************************************************************
*/

#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>

/*
******************************************************************************
			 ALL FUNCTIONS PROTOTYPES
******************************************************************************
*/

void box(int l,int r,int t,int b,int c,int d);
void welcome();
void back();
void info();
int  pass();
void load();
void topic();
void menu();
void date();
void time();
int count(int n);
void dialog(int a);
void thanks();

void purch();
void purcmenu();
void purcdtl(int a);
void showpurc();
void printdtl(int n);

void sales();
void adbill();
void bill();
void shwbill();
void printbl(int a);
void mdybill();
void newbill(int n);
void dltbill();
void delbill(int a);

void stock();
void vwstck();
void upstck();

void empmenu();
void addrec();
void printrec(int n);
void delall();
void recbox();
void prallrec();
void modify();
void newrec(int n);
void delrec(int n);
void deletee();
/*
******************************************************************************
				  MAIN BODY
******************************************************************************
*/

void main()
{
  clrscr();
     welcome();
    topic();
    pass();
    load();
    menu();

  getch();
}


/*
******************************************************************************
			     FUNCTION FOR BOX
******************************************************************************
*/

void box(int l,int r,int t,int b,int c,int d)
{

       gotoxy(l,t);
	 textcolor(c);
	 cprintf("É");	               //Alt+201= É
	 for(int i=l+1;i<r;i++)
	 {
	   cprintf("Í");	       //Alt+205= Í
	   delay(d);
	 }
	 cprintf("»");	               //Alt+187= »

  gotoxy(l,t+1);

	 for(i=t+1;i<b;i++)

      {
	gotoxy(l,i);
	cprintf("º");		       //Alt+186= º
	delay(d);
	gotoxy(r,i);
	cprintf("º");		       //Alt+186= º
	delay(d);
      }
  gotoxy(l,b);
       cprintf("È");		       //Alt+200= È

	 for(i=l+1;i<r;i++)
	  {
	    cprintf("Í");	       //Alt+205= Í
	    delay(d);
	  }
	 cprintf("¼");	               //Alt+188= ¼
}

/*
******************************************************************************
			  FUNCTION FOR BACKGROUND
******************************************************************************
*/

 void back()
{   int i,j;
  clrscr();
  textmode(BW40);
 gotoxy(2,3);
 for(j=1;j<=2;j++)
   {
      for(i=1;i<=40;i++)
     {
       textcolor(3+128);            //128 means BLINK
       cprintf("° °");
     }
   }
	  textcolor(3);
}

/*
******************************************************************************
			FUNCTION FOR WELCOME SCREEN
******************************************************************************
*/

void welcome()
{

  back();

  box(1,40,2,25,6,0);
  gotoxy(14,5);
  textcolor(4);
  cprintf("WELCOME!!!!");
  gotoxy(14,6);
  cprintf("ÄÄÄÄÄÄÄÄÄÄÄ");
  info();
}

/*
******************************************************************************
			   FUNCTION FOR INFORMATION
******************************************************************************
*/

void info()
{
  gotoxy(6,9);
    textcolor(5);
       cprintf("St. Anthony's Sr. Sec. School");
    gotoxy(17,11);
       cprintf("UDAIPUR");
    gotoxy(13,13);
       cout<<"SESSION:2012-2013";
    gotoxy(3,15);
      textcolor(2);
       cprintf("NAME: KARTIK AGARWAL");
    gotoxy(3,17);
       cprintf("CLASS: XII Sci 'B'");
    gotoxy(3,19);
       cprintf("ROLL NO: 24");
    gotoxy(8,21);
       cprintf("SUBMITTED TO:");
    gotoxy(22,21);
       cprintf("C.B.S.E.");
    gotoxy(22,23);
       cout<<"Press any key...";

getch();
}

/*
******************************************************************************
			   FUNCTION FOR TOPIC NAME
******************************************************************************
*/

void topic()
{

 int i,r,c,col=1;
 int i1,r1,c1;
 textmode(C40);
 char s[35]="Industrial Management System!!!!";
 char p[7]="  TOPIC";
    clrscr( );
   c1=14;
   for(i=0;i<7;i++)
   {
     for(r1=1;r1<=10;r1++)
       {
	   gotoxy(c1,r1);
	   textcolor(col);
	   cprintf("%c",p[i]);
	   delay(9);
	   gotoxy(c1,r1);
	   cout<<" ";
	   delay(4);
       }
  gotoxy(c1,r1);
  cprintf("%c",p[i]);
     c1++;
     col++;
   }

   c=5;
   for(i=0;i<31;i++)
   {
     for(r=25;r>=14;r--)
       {
	  if(col==16)
	   col=1;
	   gotoxy(c,r);
	   textcolor(col);
	   cprintf("%c",s[i]);
	   delay(9);
	   gotoxy(c,r);
	   cout<<" ";
	   delay(5);
       }
  gotoxy(c,r);
  cprintf("%c",s[i]);
     c++;
     col++;
   }
getch( );
}


/*
******************************************************************************
		       FUNCTION FOR PROGRESS BAR
******************************************************************************
*/

void load()
{
clrscr();
//textmode(C80);
box(1,79,1,25,3,2);
box(13,66,10,12,11,0);

	int j,k=1;
      for(j=15;j<65;j++)
 {
    gotoxy(j,11);
    textcolor(j-14);
    cprintf("²");
    delay(75);

    gotoxy(5,15);
    textcolor(j);
    cprintf("Processing Please Wait!!!!!!");
    textcolor(15);
    gotoxy(32,10);
    cprintf("LOADING ");
    gotoxy(40,10);
     cprintf("%d %",k*2);
     k++;
 }

  gotoxy(23,18);
   textcolor(3);
   cprintf("LOADING COMPLETE..");


   gotoxy(25,20);
   textcolor(3);
   cprintf("Press any key to Continue..");

 getch();

}

/*
******************************************************************************
		      FUNCTION FOR PASSWORD CHECKING
******************************************************************************
*/

int pass()
{
 int j;

  clrscr();
 textmode(C80);

for(j=3;j>=0 ; )
 {
    if(j<=3)
     {
      clrscr();
       box(1,79,1,25,3,0);
       box(35,69,9,11,9,0);
       box(35,69,12,14,9,0);
       box(37,69,22,24,9,0);
     }


   char p[20],u[20];
  int a,i;
   gotoxy(15,10);
     textcolor(15);
     cprintf("Enter The Username:");
   gotoxy(15,13);
     cprintf("Enter the Password:");
  gotoxy(42,23);
  textcolor(3);
  cprintf("No. of attempts left: ");

   cprintf("%d",j);

   gotoxy(37,10);
     textcolor(15);
	 gets(u);
   gotoxy(37,13);

     for(i=0 ; 1 ;)
       {
	p[i]=getch();
	  if(p[i]=='\b')
	   {
	      cout<<'\b';
	      cout<<' '<<'\b';
	      i--;
	       continue;
	   }
     textcolor(15);
     cprintf("*");
       if(p[i]=='\r'||p[i]=='\n')
	break;
	i++;
       }
       p[i]='\0';
     cout<<"\b ";
      if(strcmp(u,"admin")==0  &&  strcmp(p,"pass")==0  )
	{
	  gotoxy(13,20);
	      textcolor(11);
	      cprintf("USERNAME and PASSWORD MATCH...");
	    delay(1500);
	 clrscr();
	    box(1,79,1,25,3,3);
	  gotoxy(26,12);
	  textcolor(4);
	      cprintf("ACCESS GRANTED....");
	  delay(1500);
	  clrscr();
	  return(0);

	}
     else
      {
	  gotoxy(13,20);
	      textcolor(11);
	      cprintf("USERNAME and PASSWORD doesn't MATCH...");
	    delay(1200);
	     j=j--;
	     getch();
	if(j==0)
	{
	 clrscr();
	 box(1,79,1,25,3,1);
	  gotoxy(26,12);
	 textcolor(4);
	      cprintf("ACCESS DENIED....");
	  gotoxy(28,15);
	      cprintf("All attempts over....");
	 delay(2000);
	 clrscr();


	gotoxy(25,13);
	  textcolor(4);
	   cprintf("Oopssss You Have To Quit!!!!!!");
	      delay(100);

	    box(11,69,11,15,9,0);
	      delay(90);

	    box(9,71,9,17,9,0);
	      delay(90);

	    box(7,73,7,19,9,0);
	      delay(90);

	    box(5,75,5,21,9,0);
	      delay(90);

	    box(3,77,3,23,9,0);
	      delay(90);

	    box(1,79,1,25,9,0);
	      delay(500);

	    box(1,79,1,25,0,0);
	      delay(100);

	    box(3,77,3,23,0,0);
	      delay(100);

	    box(5,75,5,21,0,0);
	      delay(100);

	    box(7,73,7,19,0,0);
	      delay(100);

	    box(9,71,9,17,0,0);
	      delay(100);

	    box(11,69,11,15,0,0);
	      delay(200);
	 exit(0);

	 }  // End of if loop

       }   //  End of else loop
   }  // End of for loop
 return(1);
} //End of function pass

/*
******************************************************************************
			   FUNCTION FOR TIME
******************************************************************************
*/
 void time()
  {
    struct time t;
    box(7,24,15,17,11,0);
    while(!kbhit())
	{
	     gettime(&t);
	      gotoxy(8,16);
	      textcolor(12);
	      cprintf("Time:");
	      cprintf("%d",t.ti_hour);
	      textcolor(10+128);
	      cprintf(":");
	      textcolor(12);
	      cprintf("%d",t.ti_min);
	      textcolor(10+128);
	      cprintf(":");
	      textcolor(12);
	      cprintf("%d",t.ti_sec);
	      textcolor(10+128);
	      cprintf(":");
	      textcolor(12);
	      cprintf("%d",t.ti_hund);
	      delay(10);
	 }
     }
/*
******************************************************************************
			   FUNCTION FOR DATE
******************************************************************************
*/
void date()
{
struct date d;
 box(7,24,18,20,11,0);
    getdate(&d);
    gotoxy(8,19);
    textcolor(12);
    cprintf("Date:");
    cprintf("%d", d.da_day);
    cprintf("/%d", d.da_mon);
    cprintf("/%d", d.da_year);
}
/*
******************************************************************************
				MAIN MENU
******************************************************************************
*/
void menu()
{
textmode(C40);
  int C=8,R=6,y;
  char ch;
  char men[5][22]={"1. Purchase","2. Sales","3. Stock","4. Employees Records","EXIT"};
  box(1,40,2,24,6,2);

   gotoxy(6,4);
   textcolor(3);
    cprintf("\"INDUSTRIAL MANAGEMENT SYSTEM\"");

   textcolor(9);
   gotoxy(5,6);
    cprintf(men[0]);

   gotoxy(5,8);
    cprintf(men[1]);

   gotoxy(5,10);
    cprintf(men[2]);

   gotoxy(5,12);
    cprintf(men[3]);

   gotoxy(33,23);
    cprintf(men[4]);

   date();
   time();

  gotoxy(5,6);
   textcolor(12);
     cprintf(men[0]);
    gotoxy(8,6);
getch();
getch();
  while(1)
   {
    if(R==6)
     {
       textcolor(12);
       gotoxy(5,6);
       cprintf(men[0]);
       textcolor(9);
       gotoxy(33,23);
       cprintf(men[4]);
       gotoxy(8,6);
     }

    ch=getch();

	if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 gotoxy(C,R+2);
	  R=R+2;
	   if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(8,8);
	    }
	   if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(8,10);
	    }
	   if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      textcolor(9);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(8,12);
	    }

	  if(R==14)
	   {
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      textcolor(12);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(33,23);

	   }

	 if(R==16)
	   {
	     gotoxy(5,6);
	     R=6;
	     textcolor(12);
	     cprintf(men[0]);
	     gotoxy(8,6);

	     textcolor(9);
	       gotoxy(5,8);
	       cprintf(men[1]);
	   }

	}


      if(ch=='H')                        // FOR UP ARROW KEY
       {
	gotoxy(C,R-2);
	  R=R-2;

	   if(R==6)
	    {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(8,8);
	   }

	   if(R==8)
	   {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(8,8);
	  }

	   if(R==10)
	   {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      gotoxy(5,8);
	      cprintf(men[1]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(8,10);
	   }
	  if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      gotoxy(5,10);
	      cprintf(men[2]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      textcolor(9);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(8,12);
	   }

	   if(R==4)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(men[0]);
	      gotoxy(5,12);
	      cprintf(men[3]);
	      textcolor(12);
	      gotoxy(33,23);
	      cprintf(men[4]);
	      gotoxy(8,12);
	   }

       if(R<6)
	{
	  gotoxy(33,23);
	  R=14;
	}
       if(R==23)
	{
	  gotoxy(5,12);
	  R=12;
	}
      }

      if(ch=='\r')
	{
	 y=wherey();

	  if(y==6)
	    purch();
	  if(y==8)
	    sales();
	  if(y==10)
	    stock();
	  if(y==12)
	    empmenu();

	 if(y==23)
	   thanks();
	}
     }
 }

/*
******************************************************************************
				PURCHASE MENU
******************************************************************************
*/

void purch()
 {
    clrscr();
 int C=8,R=10,y;
 char ch;
 char opt[3][20]={"1. Add Details","2. View Details","3. Back"};
  textmode(BW40);
  box(1,40,2,24,6,2);           //l,r,t,b,c,d
   textcolor(9);
     gotoxy(15,3);
      cprintf("PURCHASE");
    gotoxy(5,10);
     cprintf(opt[0]);
    gotoxy(5,12);
     cprintf(opt[1]);
    gotoxy(5,14);
     cprintf(opt[2]);

   gotoxy(8,10);

   while(1)
   {

    if(R==10)
     {
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[1]);
	      gotoxy(5,14);
	      cprintf(opt[2]);
	    gotoxy(8,10);
     }

    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 gotoxy(C,R+2);
	  R=R+2;

	  if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,10);
		cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,12);
		cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,14);
		cprintf(opt[2]);
	     gotoxy(8,12);
	    }

	  if(R==14)
	    {
	      textcolor(9);
	      gotoxy(5,10);
		cprintf(opt[0]);
	      gotoxy(5,12);
		cprintf(opt[1]);
	      textcolor(12);
	      gotoxy(5,14);
		cprintf(opt[2]);
	     gotoxy(8,14);
	    }
	 if(R==16)
	       R=10;

	 }

     if(ch=='H')                        // FOR UP ARROW KEY
      {
     gotoxy(C,R-2);
	  R=R-2;

	   if(R<10)
	    {
	      textcolor(9);
	      gotoxy(5,10);
		cprintf(opt[0]);
	      gotoxy(5,12);
		cprintf(opt[1]);
	      textcolor(12);
	      gotoxy(5,14);
		cprintf(opt[2]);
	      gotoxy(8,14);
	      R=14;
	    }

	   if(R==10)
	    {
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[1]);
	      gotoxy(5,14);
	      cprintf(opt[2]);

	      gotoxy(8,10);
	      R=10;
	    }

	   if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,14);
	      cprintf(opt[2]);

	      gotoxy(8,12);
	      R=12;
	    }

	  if(R==14)
	    {
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[0]);
	      gotoxy(5,12);
	      cprintf(opt[1]);

	      textcolor(12);
	      gotoxy(5,14);
	      cprintf(opt[2]);

	      gotoxy(8,14);
	      R=14;
	    }
	}

      if(ch=='\r')
       {
	 y=wherey();

	  if(y==10)
	    purcmenu();
	  if(y==12)
	    showpurc();
	  if(y==14)
	    menu();
       }
    }
}

//----------------------------------------------------------------------------
void purcmenu()
 {
  clrscr();
 int C=8,R=6,x,y;
 char ch;
 char opt[6][35]={"1. Wood","2. Chlorine","3. Sulphuric Acid","4. Basic Raw Material","Go Back To Main Menu","EXIT"};
  textmode(BW40);
  box(1,40,2,24,6,2);           //l,r,t,b,c,d
   textcolor(9);

    gotoxy(5,6);
     cprintf(opt[0]);
    gotoxy(5,8);
     cprintf(opt[1]);
    gotoxy(5,10);
     cprintf(opt[2]);
    gotoxy(5,12);
     cprintf(opt[3]);
    gotoxy(3,23);
     cprintf(opt[4]);
    gotoxy(33,23);
     cprintf(opt[5]);

   gotoxy(8,6);

   while(1)
   {

    if(R==6)
     {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,6);

     }
    ch=getch();
	if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 gotoxy(C,R+2);
	  R=R+2;

	  if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,8);

	     }

	  if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,10);
	    }

	    if(R==12)
	     {
	       textcolor(9);
	       gotoxy(5,10);
	       cprintf(opt[2]);
	       textcolor(12);
	       gotoxy(5,12);
	       cprintf(opt[3]);
	       textcolor(9);
	       gotoxy(3,23);
	       cprintf(opt[4]);
	       gotoxy(33,23);
	       cprintf(opt[5]);
	       gotoxy(8,12);

	     }

	    if(R==14)
	     {
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(3,23);
	      R=4;
	    }
	  if(R==16)
	   {
	     gotoxy(5,6);
	     textcolor(12);
	     cprintf(opt[0]);
	     textcolor(9);
	     gotoxy(3,23);
	     cprintf(opt[4]);
	     gotoxy(8,6);
	     R=6;
	   }
	 }

     if(ch=='H')                        // FOR UP ARROW KEY
      {
 int x,y;
 x=wherex();
 y=wherey();
       gotoxy(C,R-2);
	  R=R-2;

	   if(R<6)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(3,23);
	      R=14;
	    }

	   if(R==6)
	    {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,6);
	      R=6;
	    }

	   if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,8);
	      R=8;
	    }

	  if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,10);
	      R=10;
	    }
	  if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,12);
	      R=12;
	    }

	  if(x==33 && y==23)
	    {
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,12);
	      R=12;
	    }
	}

y=wherey();
     if(y==23)
      {
       if(ch=='M')                 // FOR RIGHT ARROW KEY
	{
	    textcolor(9);

	    gotoxy(5,6);
	    cprintf(opt[0]);

	    gotoxy(3,23);
	    cprintf(opt[4]);

	    textcolor(12);
	    gotoxy(33,23);
	    cprintf(opt[5]);

	    gotoxy(33,23);
	 R=4;
       }
      if(ch=='K')                 // FOR LEFT ARROW KEY
       {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);

	      gotoxy(5,12);
	      cprintf(opt[3]);

	      gotoxy(33,23);
	      cprintf(opt[5]);

	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);

	      gotoxy(3,23);
	 R=14;
       }
      }
      if(ch=='\r')
	{
	 y=wherey();
	 x=wherex();
	  if(y==6)
	    purcdtl(1);
	  if(y==8)
	    purcdtl(2);
	  if(y==10)
	    purcdtl(3);
	  if(y==12)
	    purcdtl(4);

	  if(y==23 && x==3)
	   menu();
	  if(y==23 && x==33)
	    thanks();

	}
    }
}

/*
******************************************************************************
				EMPLOYEES MENU
******************************************************************************
*/
void empmenu()
{
 clrscr();
 int C=8,R=6,x,y;
 char ch;
 char opt[7][35]={"1. Add new employee record","2. View existing employee record","3. Modify employee record","4. Delete employee record","5. Delete all employee record","Go Back To Main Menu","EXIT"};
  textmode(BW40);
  box(1,40,2,24,6,2);           //l,r,t,b,c,d
   textcolor(9);
       gotoxy(10,3);
      cprintf("EMPLOYEE RECORDS");
    gotoxy(5,6);
     cprintf(opt[0]);
    gotoxy(5,8);
     cprintf(opt[1]);
    gotoxy(5,10);
     cprintf(opt[2]);
    gotoxy(5,12);
     cprintf(opt[3]);
    gotoxy(5,14);
     cprintf(opt[4]);
    gotoxy(3,23);
     cprintf(opt[5]);
    gotoxy(33,23);
     cprintf(opt[6]);

   gotoxy(8,6);

   while(1)
   {

    if(R==6)
     {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,6);

     }
    ch=getch();
	if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 gotoxy(C,R+2);
	  R=R+2;

	  if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,8);

	     }

	  if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,10);

	     }

	    if(R==12)
	     {
	       textcolor(9);
	       gotoxy(5,10);
	       cprintf(opt[2]);
	       textcolor(12);
	       gotoxy(5,12);
	       cprintf(opt[3]);
	       textcolor(9);
	       gotoxy(5,14);
	       cprintf(opt[4]);
	       gotoxy(3,23);
	       cprintf(opt[5]);
	       gotoxy(33,23);
	       cprintf(opt[6]);
	       gotoxy(8,12);

	     }

	   if(R==14)
	    {
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(12);
	      gotoxy(5,14);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,14);
	     }

	    if(R==16)
	     {
	      textcolor(9);
	      gotoxy(5,14);
	      cprintf(opt[4]);
	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      textcolor(9);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(3,23);
	      R=4;
	    }
	  if(R==18)
	   {
	     gotoxy(5,6);
	     textcolor(12);
	     cprintf(opt[0]);
	     textcolor(9);
	     gotoxy(3,23);
	     cprintf(opt[5]);
	     gotoxy(8,6);
	     R=6;
	   }
	 }

     if(ch=='H')                        // FOR UP ARROW KEY
      {
 int x,y;
 x=wherex();
 y=wherey();
       gotoxy(C,R-2);
	  R=R-2;

	   if(R<6)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      textcolor(9);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(3,23);
	      R=16;
	    }

	   if(R==6)
	    {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,6);
	      R=6;
	    }

	   if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,8);
	      R=8;
	    }

	  if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,10);
	      R=10;
	    }
	  if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(9);
	      gotoxy(5,14);
	      cprintf(opt[4]);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,12);
	      R=12;
	    }

	   if(R==14)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,14);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,14);
	      R=14;
	    }

	 if(x==33 && y==23)
	    {
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(12);
	      gotoxy(5,14);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[5]);
	      gotoxy(33,23);
	      cprintf(opt[6]);
	      gotoxy(8,14);
	      R=14;
	    }
	}

y=wherey();
     if(y==23)
      {
       if(ch=='M')                 // FOR RIGHT ARROW KEY
	{
	    textcolor(9);

	    gotoxy(5,6);
	    cprintf(opt[0]);

	    gotoxy(5,8);
	    cprintf(opt[1]);

	    gotoxy(5,10);
	    cprintf(opt[2]);

	    gotoxy(5,12);
	    cprintf(opt[3]);

	    gotoxy(5,14);
	    cprintf(opt[4]);

	    gotoxy(3,23);
	    cprintf(opt[5]);

	    textcolor(12);
	    gotoxy(33,23);
	    cprintf(opt[6]);
	    gotoxy(33,23);
	 R=4;
       }

      if(ch=='K')                 // FOR LEFT ARROW KEY
       {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);

	      gotoxy(5,8);
	      cprintf(opt[1]);

	      gotoxy(5,10);
	      cprintf(opt[2]);

	      gotoxy(5,12);
	      cprintf(opt[3]);

	      gotoxy(5,14);
	      cprintf(opt[4]);

	      gotoxy(33,23);
	      cprintf(opt[6]);

	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[5]);

	      gotoxy(3,23);
	 R=16;
       }
      }
      if(ch=='\r')
	{
	 y=wherey();
	 x=wherex();
	  if(y==6)
	   addrec();
	  if(y==8)
	   prallrec();
	  if(y==10)
	   modify();
	  if(y==12)
	   deletee();
	  if(y==14)
	    delall();
	  if(y==23 && x==3)
	   menu();
	  if(y==23 && x==33)
	   thanks();
	}

    }

}
/*
******************************************************************************
				CLASSES
******************************************************************************
*/
//----------------------------PURCHASE CLASS----------------------------------
class purc
{
 int           qnty;
 int           d,m,y;
 char          bn[10];
 char 	       cpynm[50];
 unsigned long trnscst;
 unsigned long ttlcst;
 unsigned long cst;
 char          mtype[30];
public:

    void input(int a)
      {
	clrscr();
	textmode(C80);
	box(1,79,1,25,6,1);      //l,r,t,b,c,d
	gotoxy(22,2);
       cprintf("FRIENDS CHEMICAL & FERTILISERS ");

       if(a==1)
	{
	  gotoxy(22,4);
	 cprintf("ENTER PURCHASE DETAIL OF WOOD");
	 strcpy(mtype,"Wood");
	}
	 if(a==2)
	   {
	    gotoxy(21,4);
	    cprintf("ENTER PURCHASE DETAIL OF CHLORINE");
	    strcpy(mtype,"Chlorine");
	   }
	     if(a==3)
	      {
		gotoxy(22,4);
		cprintf("ENTER PURCHASE DETAIL OF ACID");
			 strcpy(mtype,"Acid");
	       }
	       if(a==4)
		 {
		  gotoxy(19,4);
		  cprintf("ENTER PURCHASE DETAIL OF RAW MATERIAL");
		   strcpy(mtype,"Raw Material");
		 }

	textcolor(11);
	 gotoxy(4,7);
	   cprintf("Enter the Bill No.            : ");
	 gotoxy(4,9);
	   cprintf("Enter the Date Of Purchase    : ");
	 gotoxy(37,9);
	   cprintf("DATE: ");
	 gotoxy(48,9);
	   cprintf("MONTH: ");
	 gotoxy(60,9);
	   cprintf("YEAR: ");

	gotoxy(4,11);
	  cprintf("Purchased From                : ");

	gotoxy(4,13);
	  cprintf("Enter the Quantity (Kg.)      : ");

	gotoxy(4,15);
	  cprintf("Enter the Cost                : Rs. ");

	gotoxy(4,17);
	  cprintf("Enter the Transportation Cost : Rs. ");

	gotoxy(4,19);
	  cprintf("        TOTAL COST            : Rs. ");

	gotoxy(36,7);
	  gets(bn);
	gotoxy(43,9);
	  cin>>d;
	gotoxy(55,9);
	  cin>>m;
	gotoxy(66,9);
	  cin>>y;

	gotoxy(36,11);
	  gets(cpynm);
	gotoxy(36,13);
	  cin>>qnty;
	gotoxy(40,15);
	  cin>>cst;
	gotoxy(40,17);
	  cin>>trnscst;
	gotoxy(40,19);
	  cout<<(cst+trnscst);
       getch();
     gotoxy(15,22);

     cout<<"Press any key to go back to Purchase Menu\b";
     getch();
   }

  void print()
      {
	clrscr();
	textmode(C80);
	box(1,79,1,25,6,1);      //l,r,t,b,c,d
	gotoxy(22,3);
       cprintf("FRIENDS CHEMICAL & FERTILISERS ");
	gotoxy(29,4);
       cprintf("PURCHASE DETAILS");


	textcolor(11);
	gotoxy(4,7);
	 cprintf("Bill No.            : ");
	 cprintf("%s",bn);

	gotoxy(4,9);
	 cprintf("Date Of Purchase    : ");
	 cprintf("%d/",d);
	 cprintf("%d/",m);
	 cprintf("%d",y);

	gotoxy(4,11);
	 cprintf("Material Type       : ");
	 cprintf("%s",mtype);

	gotoxy(4,13);
	 cprintf("Purchased From      : ");
	 cprintf("%s",cpynm);

	gotoxy(4,15);
	 cprintf("Quantity (Kg.)      : ");
	 cprintf("%d",qnty);

	gotoxy(4,17);
	 cprintf("Cost                : Rs. ");
	 cprintf("%d",cst);

	gotoxy(4,19);
	 cprintf("Transportation Cost : Rs. ");
	 cprintf("%d",trnscst);

	gotoxy(14,22);
	 cprintf("        TOTAL COST : Rs. ");
	 cprintf("%d",cst+trnscst);

     getch();
   }

   void cname()
    {
     textcolor(6);
       cprintf("%s",cpynm);
    }
   void date()
    {
      textcolor(6);
	cprintf("%d/",d);
	cprintf("%d/",m);
	cprintf("%d",y);
    }
  void mtp()
   {
     textcolor(6);
       cprintf("%s",mtype);
   }
}p1;

//----------------------------SALES CLASS----------------------------------
class sls
{
char ptynm[50],ptyadd[50];
char  dt1[12],dt2[12];
char  po[10],inv[10];
char desc[90],sno[4];
int pky,qun,rt;
unsigned long amn;

public:

    void convert(unsigned long amn)
     {
	char ones[20][11] = {"", "one", "two", "three","four","five","six","seven",
			    "eight","nine","ten","eleven","twelve","thirteen","fourteen",
			    "fifteen","sixteen","seventeen","eighteen","nineteen"};
       char tens[10][10] = {"","ten","twenty", "thirty","forty","fifty","sixty","seventy",
			    "eighty","ninety"};
  textcolor(11);
       if(amn>=100000)
	{
	  convert(amn/100000);
	   cprintf(" lakh");
	     amn=amn%100000;
	      cout<<" ";
	       convert(amn);
	}

       else
	 if(amn>=1000)
	  {
	   convert(amn/1000);
	     cprintf(" thousand");
	     amn=amn%1000;
	      cout<<" " ;
		convert(amn);
	  }

    else
     if(amn>=100)
      {
	convert(amn/100);
	  cprintf(" hundred");
	   amn=amn%100;
	    cout<<" ";
	    convert(amn);
      }

    else
      if(amn>=20)
       {
	cprintf("%s",tens[amn/10]);
	 amn=amn%10;
	    cout<<" ";
	    if(amn==0) cout<<"\b";
	    convert(amn);
       }

    else
    {
	cprintf(ones[amn]);
    }
  return;
}
    void input()
      {
	clrscr();
	 bill();
	  gotoxy(3,6);
	   gets(ptynm);
	  gotoxy(3,7);
	   gets(ptyadd);
	  gotoxy(51,5);
	   cin>>inv;
	  gotoxy(66,5);
	   gets(dt1);
	  gotoxy(50,7);
	   cin>>po;
	  gotoxy(66,7);
	   gets(dt2);
	  gotoxy(3,12);
	   cin>>sno;
	  gotoxy(8,12);
	   gets(desc);
	  gotoxy(41,12);
	   cin>>pky;
	  gotoxy(49,12);
	   cin>>qun;
	  gotoxy(63,12);
	   cin>>rt;
     amn=(float)qun*rt;
	  gotoxy(71,12);
	   cout<<amn;
	  gotoxy(70,21);
	   cout<<amn;
	   cout<<"\\-";
	  gotoxy(12,21);
	   convert(amn);
	    cprintf(" only");
	}
   void print()
      {
       clrscr();
	  bill();
	textcolor(11);
	  gotoxy(3,6);
	   cprintf("%s",ptynm);
	  gotoxy(3,7);
	   cprintf("%s",ptyadd);
	  gotoxy(51,5);
	   cprintf("%s",inv);
	  gotoxy(66,5);
	   cprintf("%s",dt1);
	  gotoxy(50,7);
	   cprintf("%s",po);
	  gotoxy(66,7);
	   cprintf("%s",dt2);
	  gotoxy(3,12);
	    cprintf("%s",sno);
	  gotoxy(8,12);
	   cprintf("%s",desc);
	  gotoxy(41,12);
	   cprintf("%d",pky);
	  gotoxy(49,12);
	   cprintf("%d",qun);
	  gotoxy(63,12);
	   cprintf("%d",rt);
	amn=(float)qun*rt;
	  gotoxy(71,12);
	   cout<<amn;
	 // cprintf("%u",amn);
	  gotoxy(70,21);
	   cout<<amn<<"/-";
	  // cprintf("%d\\-",amn);
	  gotoxy(12,21);
	   convert(amn);
	   cprintf(" only");
	 getch();
	}

   void pnm()
    {
     textcolor(6);
       cprintf("%s",ptynm);
    }
   void idt()
    {
      textcolor(6);
	cprintf("%s",dt1);
    }

}s1;

//-----------------------------STOCK CLASS------------------------------------
class stck
{
  int wd;
  int cl;
  int acid;
  int raw;
  int br;

 public:
   void update()
    {
     int ch;
     textcolor(9);
      textmode(BW40);
       box(1,40,2,24,6,0);
      textcolor(9);
      gotoxy(13,3);
	cprintf("Update Stock For: ");

      gotoxy(5,5);
	cprintf("1. Wood");
      gotoxy(5,7);
	cprintf("2. Chlorine");
      gotoxy(5,9);
	cprintf("3. Sulphuric Acid");
      gotoxy(5,11);
	cprintf("4. Basic Raw Material");
      gotoxy(5,13);
	cprintf("5. Bromine");

      gotoxy(10,16);
	cprintf("ENTER YOUR CHOICE : ");
      cin>>ch;
       if(ch>5)
	 {
	  gotoxy(12,18);
	  cprintf("WRONG CHOICE");
	  getch();
	 }

       clrscr();
       textmode(BW40);
       box(1,40,2,24,6,0);
       textcolor(9);
	if(ch==1)
	 {
	   gotoxy(5,5);
	     cprintf("CURRENT STOCK OF WOOD : ");
	     cprintf("%d",wd);
	   gotoxy(5,7);
	     cprintf("NEW STOCK FOR WOOD    : ");
	     cin>>wd;
	 }
       if(ch==2)
	 {
	   gotoxy(5,5);
	     cprintf("CURRENT STOCK OF CHLORINE : ");
	     cprintf("%d",cl);
	   gotoxy(5,7);
	     cprintf("NEW STOCK FOR CHLORINE    : ");
	     cin>>cl;
	 }
       if(ch==3)
	 {
	   gotoxy(5,5);
	     cprintf("CURRENT STOCK ACID    : ");
	     cprintf("%d",acid);
	   gotoxy(5,7);
	     cprintf("NEW STOCK FOR ACID    : ");
	     cin>>acid;
	 }
       if(ch==4)
	 {
	   gotoxy(3,5);
	    cprintf("CURRENT STOCK OF RAW MATERIAL : ");
	    cprintf("%d",raw);
	   gotoxy(3,7);
	    cprintf("NEW STOCK FOR RAW MATERIAL    : ");
	    cin>>raw;
	 }
       if(ch==5)
	 {
	   gotoxy(5,5);
	    cprintf("CURRENT STOCK OF BROMINE : ");
	    cprintf("%d",br);
	   gotoxy(5,7);
	    cprintf("NEW STOCK FOR BROMINE    : ");
	    cin>>br;
	 }
    }
   void view()
    {
      gotoxy(63,11);
	cout<<wd;
      gotoxy(63,13);
	cout<<cl;
      gotoxy(63,15);
	cout<<acid;
      gotoxy(63,17);
	cout<<raw;
      gotoxy(63,19);
	cout<<br;
    }

 stck()
  {
    wd=0;
    cl=0;
    acid=0;
    raw=0;
    br=0;
  }

}st1;
//----------------------------EMPLOYEE CLASS----------------------------------
class emp
{
int  empcode;
char empnm[50];
int  d,m,y;
char empadd[100];
char empdeg[50];
char empcon[12];

public:

    void input()
      {
	clrscr();
	textmode(C80);
	box(1,79,1,25,6,1);      //l,r,t,b,c,d
	gotoxy(22,2);
       cprintf("FRIENDS CHEMICAL & FERTILISERS ");
     gotoxy(25,4);

       cprintf("ENTER EMPLOYEES DETAILS");
	textcolor(11);
	gotoxy(4,7);
	cprintf("Enter the Employee Code  : ");

	gotoxy(4,9);
	cprintf("Enter the Name           : ");

	gotoxy(4,11);
	cprintf("Enter the Date of Birth  : ");
	gotoxy(33,11);
	cprintf("DATE: ");
	gotoxy(44,11);
	cprintf("MONTH: ");
	gotoxy(56,11);
	cprintf("YEAR: ");

	gotoxy(4,13);
	cprintf("Enter the Address        : ");

	gotoxy(4,15);
	cprintf("Enter the Contact Number : ");

	gotoxy(4,17);
	cprintf("Enter the Designation    : ");

	gotoxy(31,7);
	cin>>empcode;
	gotoxy(31,9);
	gets(empnm);
	gotoxy(39,11);
	cin>>d;
	gotoxy(51,11);
	cin>>m;
	gotoxy(62,11);
	cin>>y;

	gotoxy(31,13);
	gets(empadd);
	gotoxy(31,15);
	gets(empcon);
	gotoxy(31,17);
	gets(empdeg);

      }
    void print()
      {
	clrscr();
	textmode(C80);
	box(1,79,1,25,6,0);
       textcolor(4);

     gotoxy(22,3);
       cprintf("FRIENDS CHEMICAL & FERTILISERS ");
     gotoxy(28,4);
       cprintf("EMPLOYEES DETAILS");
      textcolor(11);
       gotoxy(3,7);
	 cprintf(" Employee Code  : ");
	 cprintf("%d",empcode);
       gotoxy(3,9);
	 cprintf(" Name           : ");
	 cprintf("%s",empnm);
       gotoxy(3,11);
	 cprintf(" Date of Birth  : ");
	 cprintf("%d/",d);
	 cprintf("%d/",m);
	 cprintf("%d",y);
       gotoxy(3,13);
	 cprintf(" Address        : ");
	 cprintf("%s",empadd);
       gotoxy(3,15);
	 cprintf(" Contact Number : ");
	 cprintf("%s",empcon);
       gotoxy(3,17);
	 cprintf(" Desgination    : ");
	 cprintf("%s",empdeg);

       }

      void name()
      { textcolor(6);
	  cprintf(empnm);
      }
     void desi()
      { textcolor(6);
	cprintf(empdeg);
      }
     void cont()
      { textcolor(6);
	cprintf(empcon);
      }

}e1;

/*
******************************************************************************
			FUNCTIONS FOR PURCHASES
******************************************************************************
*/
//------------------------ADDING DETAILS--------------------------------------
void purcdtl(int a)
{
 clrscr();
   ofstream fout("purchase.txt",ios::binary|ios::app);
   p1.input(a);
   fout.write((char *)&p1,sizeof(p1));
   fout.close();
 purch();
}

//--------------------------DETAILS IN RECORD BOX-----------------------------

void showpurc()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
     textcolor(6);
    gotoxy(28,4);
       cprintf("PURCHASE DETAILS ");
     gotoxy(2,8);
       cprintf("S.No.");
     gotoxy(20,8);
       cprintf("Purchased From");

     gotoxy(46,8);
       cprintf("   Material  ");

     gotoxy(64,8);
       cprintf("    Date   ");

    textcolor(3);
    gotoxy(4,6);
       cprintf("Select an Option To View ");
   ifstream fin("purchase.txt",ios::binary);

    if(!fin)
	{
	  gotoxy(9,10);
	  cout<<" NO RECORDS TO DISPLAY....";
	  getch();
	  purch();
	}

    while(!fin.eof())
     {
      fin.read((char *)&p1,sizeof(p1));
       if(fin.eof())
       break;

       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);
	cprintf(".");
	gotoxy(9,l);
	p1.cname();
	gotoxy(47,l);
	p1.mtp();
	gotoxy(62,l);
	p1.date();

      l=l+1;
     }

fin.close();

int cn;
cn=count(1);
if(cn==0)
 {
   gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   purch();
 }

 gotoxy(9,10);

char ch,y;
int C=9,R=10;

 while(1)
   {
    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }
	}
      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }
      if(ch=='\r')
	{
	   y=wherey();
	    printdtl(y-9);
	}
      if(ch=='1')
      {
	 purch();
      }
   }
}

//------------------------PRINTING SINGLE DETAIL------------------------------

void printdtl(int n)
{
 clrscr();
    textmode(C80);
   long int loc;

    ifstream fin("purchase.txt",ios::binary);
       loc=(n-1)*sizeof(p1);
       fin.seekg(loc);
     fin.read((char *)&p1,sizeof(p1));
       p1.print();
    fin.close();
 showpurc();
}

/*
******************************************************************************
			      MENU FOR SALES
******************************************************************************
*/
void sales()
{
 clrscr();
   int C=8,R=6,x,y;
 char ch;
 char opt[6][35]={"1. Add new bill","2. View previous bill","3. Modify previous bill","4. Delete previous bill","Go Back To Main Menu","EXIT"};
  textmode(BW40);
  box(1,40,2,24,6,2);           //l,r,t,b,c,d
   textcolor(9);
      gotoxy(15,3);
      cprintf("SALES");
    gotoxy(5,6);
     cprintf(opt[0]);
    gotoxy(5,8);
     cprintf(opt[1]);
    gotoxy(5,10);
     cprintf(opt[2]);
    gotoxy(5,12);
     cprintf(opt[3]);
    gotoxy(3,23);
     cprintf(opt[4]);
    gotoxy(33,23);
     cprintf(opt[5]);

   gotoxy(8,6);

   while(1)
   {

    if(R==6)
     {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,6);

     }
    ch=getch();
	if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 gotoxy(C,R+2);
	  R=R+2;

	  if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,8);

	     }

	  if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,10);
	    }

	    if(R==12)
	     {
	       textcolor(9);
	       gotoxy(5,10);
	       cprintf(opt[2]);
	       textcolor(12);
	       gotoxy(5,12);
	       cprintf(opt[3]);
	       textcolor(9);
	       gotoxy(3,23);
	       cprintf(opt[4]);
	       gotoxy(33,23);
	       cprintf(opt[5]);
	       gotoxy(8,12);

	     }

	    if(R==14)
	     {
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(3,23);
	      R=4;
	    }
	  if(R==16)
	   {
	     gotoxy(5,6);
	     textcolor(12);
	     cprintf(opt[0]);
	     textcolor(9);
	     gotoxy(3,23);
	     cprintf(opt[4]);
	     gotoxy(8,6);
	     R=6;
	   }
	 }

     if(ch=='H')                        // FOR UP ARROW KEY
      {
 int x,y;
 x=wherex();
 y=wherey();
       gotoxy(C,R-2);
	  R=R-2;

	   if(R<6)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      textcolor(9);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(3,23);
	      R=14;
	    }

	   if(R==6)
	    {
	      textcolor(12);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,6);
	      R=6;
	    }

	   if(R==8)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,8);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,8);
	      R=8;
	    }

	  if(R==10)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[2]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,10);
	      R=10;
	    }
	  if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,12);
	      R=12;
	    }

	  if(x==33 && y==23)
	    {
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[3]);
	      textcolor(9);
	      gotoxy(3,23);
	      cprintf(opt[4]);
	      gotoxy(33,23);
	      cprintf(opt[5]);
	      gotoxy(8,12);
	      R=12;
	    }
	}

y=wherey();
     if(y==23)
      {
       if(ch=='M')                 // FOR RIGHT ARROW KEY
	{
	    textcolor(9);

	    gotoxy(5,6);
	    cprintf(opt[0]);

	    gotoxy(3,23);
	    cprintf(opt[4]);

	    textcolor(12);
	    gotoxy(33,23);
	    cprintf(opt[5]);

	    gotoxy(33,23);
	 R=4;
       }
      if(ch=='K')                 // FOR LEFT ARROW KEY
       {
	      textcolor(9);
	      gotoxy(5,6);
	      cprintf(opt[0]);

	      gotoxy(5,12);
	      cprintf(opt[3]);

	      gotoxy(33,23);
	      cprintf(opt[5]);

	      textcolor(12);
	      gotoxy(3,23);
	      cprintf(opt[4]);

	      gotoxy(3,23);
	 R=14;
       }
      }
      if(ch=='\r')
	{
	 y=wherey();
	 x=wherex();
	 clrscr();
	  if(y==6)
	    adbill();
	  if(y==8)
	    shwbill();
	  if(y==10)
	    mdybill();
	  if(y==12)
	    dltbill();
	  if(y==23 && x==3)
	   menu();
	  if(y==23 && x==33)
	   thanks();
	}
    }
}
/*
******************************************************************************
			FUNCTIONS FOR SALES
******************************************************************************
*/
//----------------------------Adding Bill-------------------------------------
void adbill()
{
   clrscr();
   char op;
   ofstream fout("sales.txt",ios::binary|ios::app);
   s1.input();
   fout.write((char *)&s1,sizeof(s1));
   fout.close();
getch();
sales();
}
//------------------------Showing Bill in Record Box--------------------------
void shwbill()
{
 clrscr();
    int i=10,j=1,l=10;
  recbox();
      textcolor(6);
    gotoxy(28,4);
       cprintf("  SALES BILL     ");
     gotoxy(2,8);
       cprintf("S.No.");
     gotoxy(25,8);
       cprintf("NAME OF CONSIGNEE");
    gotoxy(64,8);
       cprintf("INVOICE DATE");

      for(int c=45;c<=59;c++)
	{
	  gotoxy(c,8);
	  cout<<" ";
	}

      for(int r=10;r<=22;r++)
	{
	  gotoxy(45,r);
	  cout<<" ";
	}
     gotoxy(45,7);
       cout<<"Í";
     gotoxy(45,9);
      cout<<"Í";
     gotoxy(45,23);
       cout<<"Í";
     gotoxy(45,25);
       cout<<"Í";

  textcolor(3);
    gotoxy(4,6);
       cprintf("Select a Bill To View ");
   ifstream fin("sales.txt",ios::binary);

    if(!fin)
	{
	  gotoxy(9,10);
	  cout<<" NO RECORDS TO DISPLAY....";
	  getch();
	  sales();
	}

    while(!fin.eof())
     {
      fin.read((char *)&s1,sizeof(s1));
       if(fin.eof())
       break;

       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);
	cprintf(".");
	gotoxy(9,l);
	s1.pnm();
	gotoxy(62,l);
	s1.idt();
      l=l+1;
     }

fin.close();

int cn;
cn=count(2);
if(cn==0)
 {
   gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   sales();
 }

 gotoxy(9,10);

char ch,y;
int C=9,R=10;

 while(1)
   {
    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }
	}
      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }
      if(ch=='\r')
	{
	   y=wherey();
	    printbl(y-9);
	}
      if(ch=='1')
      {
	 sales();
      }
   }
}
//-----------------------------Printing Single Bill---------------------------
void printbl(int n)
{
 clrscr();
    textmode(C80);
   long int loc;

    ifstream fin("sales.txt",ios::binary);
       loc=(n-1)*sizeof(s1);
       fin.seekg(loc);
     fin.read((char *)&s1,sizeof(s1));
       s1.print();
    fin.close();
 shwbill();
}

//----------------------------MODIFYING BILLS---------------------------------

void newbill(int n)
{
 dialog(1);
char ch,x;
 gotoxy(12,14);
   while(1)
     {
      ch=getch();

      if(ch=='M')                 // FOR LEFT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(12);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(15);
	 cprintf("YES");
	 gotoxy(25,14);
       }

      if(ch=='K')                 // FOR RIGHT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(15);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(12);
	 cprintf("YES");
	 gotoxy(12,14);
       }

      if(ch=='\r')
       {
	 x=wherex();
	  if(x==12)
	   {
	    goto con;
	   }
	  if(x==25)
	   {
	    sales();
	   }
       }
    }

con:
     textcolor(3);
     int loc;
   fstream fio("sales.txt",ios::binary|ios::in|ios::out);
       loc=(n-1)*sizeof(s1);
	fio.seekg(loc);
	  s1.input();
	 fio.write((char *)&s1,sizeof(s1));
	 fio.close();
    getch();
     sales();
}

//-------------------PRINTING ALL BILLS IN BOX FOR MODIFYING------------------

void mdybill()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
    textcolor(3);
    gotoxy(4,6);
       cprintf("Select Bill To Modify");
    ifstream fin("sales.txt",ios::binary);

	if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 sales();
	}

     while(!fin.eof())
     {

      fin.read((char *)&s1,sizeof(s1));
       if(fin.eof())
       break;
       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);
	cprintf(".");
	gotoxy(9,l);
	s1.pnm();
	gotoxy(47,l);
	s1.idt();
      l++;
     }
 fin.close();

int cn;
cn=count(2);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   sales();
 }
  gotoxy(9,10);
char ch;
int C=9,R=10,y=0;

 while(1)
   {
    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }
	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	  if(R!=9)
	   {
	     gotoxy(C,R-1);
	     R=R-1;
	   }
	 if(R==9)
	   {
	     gotoxy(9,j+8);
	     R=j+8;
	   }
	}

      if(ch=='\r')
	{
	 y=wherey();
	 y=y-9;
	 newbill(y);
	}
      if(ch=='1')
	{
	 sales();
	}
   }
}

//-------------------PRINTING ALL RECORDS IN BOX FOR DELETING------------------------

void dltbill()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
    textcolor(3);
    gotoxy(4,6);
       cprintf("Select Bill To Delete");
    ifstream fin("sales.txt",ios::binary);

	if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 sales();
	}

     while(!fin.eof())
     {
      fin.read((char *)&s1,sizeof(s1));
       if(fin.eof())
       break;
       textcolor(6);
	gotoxy(2,i++);
	  cprintf(" %d",j++);
	  cprintf(".");
	gotoxy(9,l);
	  s1.pnm();
	gotoxy(47,l);
	  s1.idt();
       l=l+1;
     }

 fin.close();
int cn;
cn=count(2);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   sales();
 }

  gotoxy(9,10);
char ch;
int C=9,R=10,y;

 while(1)
   {
    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }
	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }

      if(ch=='\r')
	{
	  y=wherey();
	  y=y-9;
	  delbill(y);
	}

      if(ch=='1')
	{
	 sales();
	}
   }
}

//---------------------------DELETING ONE RECORD------------------------------

void delbill(int n)
{
 clrscr();
long int a=0;
 dialog(2);
  gotoxy(12,14);
 char ch,x;
  while(1)
     {
      ch=getch();

      if(ch=='M')                 // FOR LEFT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(12);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(15);
	 cprintf("YES");
	 gotoxy(25,14);
       }

      if(ch=='K')                 // FOR RIGHT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(15);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(12);
	 cprintf("YES");
	 gotoxy(12,14);
       }

      if(ch=='\r')
       {
	 x=wherex();
	  if(x==12)
	   {
	    goto con;
	   }
	  if(x==25)
	   {
	    sales();
	   }
       }
    }
 con:
  ifstream fin("sales.txt",ios::binary);
  ofstream fout("temp.txt",ios::binary|ios::app);
  n=n*sizeof(s1);

    while(!fin.eof())
     {
       fin.read((char *)&s1,sizeof(s1));
       if (fin.eof())
	break;
	a=fin.tellg();
	   if(n!=a)
	     fout.write((char *)&s1,sizeof(s1));
     }
	 fin.close();
	 fout.close();
	 remove("sales.txt");
	 rename("temp.txt","sales.txt");
       gotoxy(15,20);
	cout<<"BILL DELETED";
      getch();
  sales();
}

/*
******************************************************************************
			    FUNCTIONS FOR STOCKS
******************************************************************************
*/

void stock()
 {
    clrscr();
 int C=8,R=10,y;
 char ch;
 char opt[3][20]={"1. Update Stock","2. View Stock","3. Back"};
  textmode(BW40);
  box(1,40,2,24,6,0);           //l,r,t,b,c,d
   textcolor(9);
	gotoxy(15,3);
      cprintf("STOCK");
    gotoxy(5,10);
     cprintf(opt[0]);
    gotoxy(5,12);
     cprintf(opt[1]);
    gotoxy(5,14);
     cprintf(opt[2]);

   gotoxy(8,10);

   while(1)
   {

    if(R==10)
     {
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[1]);
	      gotoxy(5,14);
	      cprintf(opt[2]);
	    gotoxy(8,10);
     }

    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 gotoxy(C,R+2);
	  R=R+2;

	  if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,10);
		cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,12);
		cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,14);
		cprintf(opt[2]);
	     gotoxy(8,12);
	    }

	  if(R==14)
	    {
	      textcolor(9);
	      gotoxy(5,10);
		cprintf(opt[0]);
	      gotoxy(5,12);
		cprintf(opt[1]);
	      textcolor(12);
	      gotoxy(5,14);
		cprintf(opt[2]);
	     gotoxy(8,14);
	    }
	 if(R==16)
	       R=10;

	 }

     if(ch=='H')                        // FOR UP ARROW KEY
      {
     gotoxy(C,R-2);
	  R=R-2;

	   if(R<10)
	    {
	      textcolor(9);
	      gotoxy(5,10);
		cprintf(opt[0]);
	      gotoxy(5,12);
		cprintf(opt[1]);
	      textcolor(12);
	      gotoxy(5,14);
		cprintf(opt[2]);
	      gotoxy(8,14);
	      R=14;
	    }

	   if(R==10)
	    {
	      textcolor(12);
	      gotoxy(5,10);
	      cprintf(opt[0]);
	      textcolor(9);
	      gotoxy(5,12);
	      cprintf(opt[1]);
	      gotoxy(5,14);
	      cprintf(opt[2]);

	      gotoxy(8,10);
	      R=10;
	    }

	   if(R==12)
	    {
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[0]);
	      textcolor(12);
	      gotoxy(5,12);
	      cprintf(opt[1]);
	      textcolor(9);
	      gotoxy(5,14);
	      cprintf(opt[2]);

	      gotoxy(8,12);
	      R=12;
	    }

	  if(R==14)
	    {
	      textcolor(9);
	      gotoxy(5,10);
	      cprintf(opt[0]);
	      gotoxy(5,12);
	      cprintf(opt[1]);

	      textcolor(12);
	      gotoxy(5,14);
	      cprintf(opt[2]);

	      gotoxy(8,14);
	      R=14;
	    }
	}

      if(ch=='\r')
       {
	 y=wherey();

	  if(y==10)
	    upstck();
	  if(y==12)
	    vwstck();
	  if(y==14)
	    menu();
       }
    }
}
//----------------------------UPDATE STOCK------------------------------------

void upstck()
{
 clrscr();
   ofstream fout("stock.txt",ios::binary);
   st1.update();
   fout.write((char *)&st1,sizeof(st1));
   fout.close();
 stock();
}

//--------------------------VIEW STOCK----------------------------------------
void vwstck()
{
 clrscr();

  recbox();
      textcolor(6);
    gotoxy(28,4);
       cprintf("  STOCK LIST     ");
     gotoxy(2,8);
       cprintf("S.No.");
     gotoxy(25,8);
       cprintf("  Material");

      for(int c=45;c<=59;c++)
	{
	  gotoxy(c,8);
	  cout<<" ";
	}

      for(int r=10;r<=22;r++)
	{
	  gotoxy(45,r);
	  cout<<" ";
	}
     gotoxy(45,7);
       cout<<"Í";
     gotoxy(45,9);
      cout<<"Í";
     gotoxy(45,23);
       cout<<"Í";
     gotoxy(45,25);
      cout<<"Í";

     gotoxy(64,8);
       cprintf("Stock (Kg.)");

int C=4,R=9;
    for(int i=1;i<6;i++)
      { R=R+2;
	gotoxy(C,R);
	cout<<i<<".";
      }

    gotoxy(9,11);
      cout<<"WOOD";

    gotoxy(9,13);
      cout<<"CHLORINE";

    gotoxy(9,15);
      cout<<"SULPHURIC ACID";

    gotoxy(9,17);
      cout<<"BASIC RAW MATERIAL";

    gotoxy(9,19);
      cout<<"BROMINE (finished product)";

    ifstream fin("stock.txt",ios::binary);
     fin.read((char *)&st1,sizeof(st1));
       st1.view();
  getch();
  stock();
}

/*
******************************************************************************
			FUNCTIONS FOR EMPLOYEES RECORDS
******************************************************************************
*/
//-----------------------------ADDING RECORDS---------------------------------
 void addrec()
  {
   clrscr();
   char op;
   ofstream fout("employee.txt",ios::binary|ios::app);
   e1.input();
   fout.write((char *)&e1,sizeof(e1));
   fout.close();

	gotoxy(5,20);
	 cout<<"Want to enter another record (Y/N) ";
 b:	 op=getch();
	 switch(op)
	  {
	    case 'y' :
	    case 'Y' :cout<<op;
		      addrec();
		      break;
	    case 'n' :
	    case 'N' : cout<<op;
		       empmenu();
		       break;
	    default  : goto b;
	  }
 }

//------------------------PRINTING SINGLE RECORD------------------------------

void printrec(int n)
{
 clrscr();
    emp e1;
    long int loc;
   textmode(C80);
   box(1,79,1,25,6,1);      //l,r,t,b,c,d
    ifstream fin("employee.txt",ios::binary);
       loc=(n-1)*sizeof(e1);
       fin.seekg(loc);
     fin.read((char *)&e1,sizeof(e1));
       e1.print();
    fin.close();

getch();
prallrec();
}

//-----------------------PRINTING ALL RECORDS IN BOX--------------------------

void prallrec()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
    textcolor(3);
    gotoxy(4,6);
       cprintf("Select an Employee To View ");
    ifstream fin("employee.txt",ios::binary);

	if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 empmenu();
	}


     while(!fin.eof())
     {

      fin.read((char *)&e1,sizeof(e1));
       if(fin.eof())
       break;

       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);
	cprintf(".");
	gotoxy(9,l);
	e1.name();

	gotoxy(47,l);
	e1.cont();

	gotoxy(62,l);
	e1.desi();

      l=l+1;

     }
fin.close();
int cn;

cn=count(4);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   empmenu();
 }

  gotoxy(9,10);
char ch;
int C=9,R=10,y;

 while(1)
   {

    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }

	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }

      if(ch=='\r')
	{
	  y=wherey();

	  printrec(y-9);
	}
      if(ch=='1')
	{
	 empmenu();
	}
   }
}
//----------------------------MODIFYING RECORDS-------------------------------

void newrec(int n)
{
 dialog(3);
char ch,x;
 gotoxy(12,14);
   while(1)
     {
      ch=getch();

      if(ch=='M')                 // FOR LEFT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(12);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(15);
	 cprintf("YES");
	 gotoxy(25,14);
       }

      if(ch=='K')                 // FOR RIGHT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(15);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(12);
	 cprintf("YES");
	 gotoxy(12,14);
       }

      if(ch=='\r')
       {
	 x=wherex();
	  if(x==12)
	   {
	    goto con;
	   }
	  if(x==25)
	   {
	    empmenu();
	   }
       }
    }

con:
     textcolor(3);
     int loc;
   fstream fio("employee.txt",ios::binary|ios::in|ios::out);

       loc=(n-1)*sizeof(e1);
	fio.seekg(loc);
	  e1.input();
	 fio.write((char *)&e1,sizeof(e1));
	 fio.close();
     empmenu();
}

//-----------------PRINTING ALL RECORDS IN BOX FOR MODIFYING------------------

void modify()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
    textcolor(3);
    gotoxy(4,6);
       cprintf("Select an Employee To Modify");
    ifstream fin("employee.txt",ios::binary);

	if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 empmenu();
	}


     while(!fin.eof())
     {

      fin.read((char *)&e1,sizeof(e1));
       if(fin.eof())
       break;
       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);
	cprintf(".");
	gotoxy(9,l);
	e1.name();
	gotoxy(47,l);
	e1.cont();
	gotoxy(62,l);
	e1.desi();
      l++;
     }
 fin.close();

int cn;
cn=count(4);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   empmenu();
 }


  gotoxy(9,10);
char ch;
int C=9,R=10,y=0;

 while(1)
   {
    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }
	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	  if(R!=9)
	   {
	     gotoxy(C,R-1);
	     R=R-1;
	   }
	 if(R==9)
	   {
	     gotoxy(9,j+8);
	     R=j+8;
	   }
	}

      if(ch=='\r')
	{
	 y=wherey();
	 y=y-9;
	 newrec(y);
	}
      if(ch=='1')
	{
	 empmenu();
	}
   }
}

//-------------------PRINTING ALL RECORDS IN BOX FOR DELETING------------------------

void deletee()
{
 clrscr();
 int j=1,l=10,i=10;
  recbox();
    textcolor(3);
    gotoxy(4,6);
       cprintf("Select an Employee To Delete");
    ifstream fin("employee.txt",ios::binary);

	if(!fin)
	 {
	 gotoxy(9,10);
	 cout<<"NO RECORDS TO DISPLAY....";
	 getch();
	 empmenu();
	}

     while(!fin.eof())
     {
      fin.read((char *)&e1,sizeof(e1));
       if(fin.eof())
       break;
       textcolor(6);
	gotoxy(2,i++);
	cprintf(" %d",j++);
	cprintf(".");
	gotoxy(9,l);
	e1.name();
	gotoxy(47,l);
	e1.cont();
	gotoxy(62,l);
	e1.desi();

      l=l+1;

     }

 fin.close();

int cn;
cn=count(4);
 if(cn==0)
 {  gotoxy(9,10);
   cout<<"NO RECORDS TO DISPLAY....";
   getch();
   empmenu();
 }

  gotoxy(9,10);
char ch;
int C=9,R=10,y;

 while(1)
   {

    ch=getch();
      if(ch=='P')                      // FOR DOWN ARROW KEY
	{
	 if(R<j+9)
	  {
	   gotoxy(C,R+1);
	   R=R+1;
	  }
	 if(R>=j+9)
	  {
	   gotoxy(9,10);
	   R=10;
	  }

	}

      if(ch=='H')                      // FOR UP ARROW KEY
	{
	 if(R!=9)
	  {
	   gotoxy(C,R-1);
	   R=R-1;
	  }
	if(R==9)
	  {
	   gotoxy(9,j+8);
	   R=j+8;
	  }
       }

      if(ch=='\r')
	{
	  y=wherey();
	  y=y-9;
	  delrec(y);
	}

      if(ch=='1')
	{
	 empmenu();
	}
   }
}

//---------------------------DELETING ONE RECORD------------------------------

void delrec(int n)
{
 clrscr();
long int a=0;
 dialog(4);
  gotoxy(12,14);
 char ch,x;
  while(1)
     {
      ch=getch();

      if(ch=='M')                 // FOR LEFT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(12);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(15);
	 cprintf("YES");
	 gotoxy(25,14);
       }

      if(ch=='K')                 // FOR RIGHT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(15);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(12);
	 cprintf("YES");
	 gotoxy(12,14);
       }

      if(ch=='\r')
       {
	 x=wherex();
	  if(x==12)
	   {
	    goto con;
	   }
	  if(x==25)
	   {
	    empmenu();
	   }
       }
    }
 con:
  ifstream fin("employee.txt",ios::binary);
  ofstream fout("temp.txt",ios::binary|ios::app);
  n=n*sizeof(e1);

    while(!fin.eof())
     {
       fin.read((char *)&e1,sizeof(e1));
       if (fin.eof())
	break;
	a=fin.tellg();
	   if(n!=a)
	     fout.write((char *)&e1,sizeof(e1));
     }

	 fin.close();
	 fout.close();
	 remove("employee.txt");
	 rename("temp.txt","employee.txt");
       gotoxy(9,20);
	cout<<"EMPLOYEE RECORD DELETED";
      getch();
  empmenu();
}

//---------------------------DELETING ALL RECORDS-----------------------------

 void delall()
  {
    char ch;
    int x;
 dialog(5);

    gotoxy(12,14);
    while(1)
     {
      ch=getch();

      if(ch=='M')                 // FOR LEFT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(12);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(15);
	 cprintf("YES");
	 gotoxy(25,14);
       }

      if(ch=='K')                 // FOR RIGHT ARROW KEY
       {
	 gotoxy(25,14);
	 textcolor(15);
	 cprintf("NO");
	 gotoxy(12,14);
	 textcolor(12);
	 cprintf("YES");
	 gotoxy(12,14);
       }

      if(ch=='\r')
       {
	 x=wherex();
	  if(x==12)
	   {
	    ofstream fout("employee.txt");
	     gotoxy(10,21);
	     textcolor(15);
	     cprintf("All records Deleted");
	    getch();
	     empmenu();
	   }
	  if(x==25)
	   {
	    empmenu();
	   }
       }
    }
}

/*
******************************************************************************
			   COUNTING RECORDS
******************************************************************************
*/

int count(int n)
 {
   char fnm[50];

    if(n==1)
     strcpy(fnm,"purchase.txt");
       if(n==2)
	 strcpy(fnm,"sales.txt");
	    if(n==4)
	      strcpy(fnm,"employee.txt");

   ifstream f(fnm,ios::binary);
     long c,l;
      f.seekg( 0 , ios::end) ;
       l=f.tellg();

	if(n==1)
	 c=l/sizeof(p1);

	   if(n==2)
	     c=l/sizeof(s1);

	     if(n==4)
	       c=l/sizeof(e1);
       f.close();
       return c;
 }

/*
******************************************************************************
			   CONFIRMATION DIALOG BOX
******************************************************************************
*/
void dialog(int a)
 {
   clrscr();
     textmode(BW40);
       box(1,40,2,24,6,1);        //l,r,t,b,c,d;
       box(7,32,8,16,9,1);
       box(10,16,13,15,1,0);
       box(23,28,13,15,1,0);

      gotoxy(13,9);
       textcolor(3);
	cprintf("ARE YOU SURE");
      gotoxy(8,10);

	if(a==1)
	  cprintf(" TO MODIFY THIS BILL ?");
	if(a==2)
	  cprintf(" TO DELETE THIS BILL ?");
	if(a==3)
	  cprintf("TO MODIFY THIS RECORDS ?");
	if(a==4)
	  cprintf("TO DELETE THIS RECORDS ?");
	if(a==5)
	  cprintf("TO DELETE ALL RECORDS ?");

      gotoxy(12,14);
	textcolor(12);
	cprintf("YES");
      gotoxy(25,14);
	textcolor(15);
	cprintf("NO");
	gotoxy(12,14);

}

/*
******************************************************************************
		    FUNCTIONS FOR RECORD BOX FORMAT
******************************************************************************
*/

 void recbox()
{
  clrscr();
  textmode(C80);
    box(1,79,1,25,15,0);
    box(1,79,7,9,15,0);
    box(1,7,7,23,15,0);                // SNO. BOX
    box(7,60,7,23,15,0);               // NAME BOX
    box(45,60,7,23,15,0);                //mob. box
    box(1,79,23,25,15,0);               // EXIT BOX
 textcolor(6);
     gotoxy(22,2);
       cprintf("FRIENDS CHEMICAL & FERTILISERS ");
     gotoxy(28,4);
       cprintf("EMPLOYEES RECORDS");
     gotoxy(2,8);
       cprintf("S.No.");
     gotoxy(25,8);
       cprintf("Name");
     gotoxy(48,8);
       cprintf("Contact No.");
     gotoxy(64,8);
       cprintf("Designation");
    gotoxy(27,24);
       cprintf("1. BACK TO MENU");
  textcolor(15);
     gotoxy(1,7);
       cprintf("Ì");
     gotoxy(79,7);
       cprintf("¹");             // Alt+185(¹)
     gotoxy(1,9);
       cprintf("Ì");             // Alt+204(Ì)
     gotoxy(79,9);
       cprintf("¹");
     gotoxy(1,23);
       cprintf("Ì");
     gotoxy(79,23);
       cprintf("¹");
     gotoxy(7,9);
       cprintf("Î");
     gotoxy(60,9);
       cprintf("Î");              // Alt+206(Î)
     gotoxy(45,9);
       cprintf("Î");
     gotoxy(60,23);
       cprintf("Ê");              // Alt+202(Ê)
     gotoxy(45,23);
       cprintf("Ê");
     gotoxy(7,23);
       cprintf("Ê");
     gotoxy(7,7);
       cprintf("Ë");              // Alt+203(Ë)
     gotoxy(45,7);
       cprintf("Ë");
     gotoxy(60,7);
       cprintf("Ë");
 }

/*
******************************************************************************
		       FUNCTIONS FOR BILL FORMAT
******************************************************************************
*/

 void bill()
{
  clrscr();
  textmode(C80);
				  //  box(l,r,t,b,c,d);
    box(1,79,1,4,15,0);               // upper box
    box(1,39,4,8,15,0);               // comp. name box
    box(39,79,4,6,15,0);              // invoice no
    box(59,79,4,8,15,0);              // date
    box(39,79,4,8,15,0);              // po no
    box(1,79,9,11,15,0);              // heading
    box(1,79,11,25,15,0);             // main under box
    box(1,79,20,22,15,0);             // Rs. box
    box(1,79,23,25,15,0);             // Return box
    box(6,39,11,20,15,0);             // goods desc. box
    box(47,61,11,20,15,0);             // quantity box
    box(68,79,11,22,15,0);             // amount box
 textcolor(6);
     gotoxy(22,3);
       cprintf("FRIENDS CHEMICAL & FERTILISERS ");
     gotoxy(28,2);
       cprintf("TAX/RETAIL INVOICE");
     gotoxy(3,5);
       cprintf("Name & Address of Consignee:");
     gotoxy(40,5);
       cprintf("Invoice No.");
     gotoxy(40,7);
       cprintf("P.O. No.");
     gotoxy(60,5);
       cprintf("Date:");
     gotoxy(60,7);
       cprintf("Date:");
     gotoxy(3,21);
       cprintf("Rupees :");
     gotoxy(2,10);
       cprintf("S.No.");
     gotoxy(14,10);
       cprintf("Goods Description");
     gotoxy(40,10);
       cprintf("Packing");
     gotoxy(49,10);
       cprintf("Quantity(Kg)");
     gotoxy(63,10);
       cprintf("Rate");
     gotoxy(71,10);
       cprintf("Amount");
     gotoxy(30,24);
       cprintf("1. BACK TO MENU");
  textcolor(15);
     gotoxy(1,4);
       cprintf("Ì");
     gotoxy(39,6);
      cprintf("Ì");
     gotoxy(1,11);
       cprintf("Ì");
     gotoxy(1,20);
       cprintf("Ì");
     gotoxy(1,8);
       cprintf("È");
     gotoxy(79,4);
       cprintf("¹");
     gotoxy(79,6);
       cprintf("¹");
     gotoxy(79,11);
       cprintf("¹");
     gotoxy(79,20);
       cprintf("¹");
     gotoxy(79,8);
       cprintf("¼");
     gotoxy(59,8);
       cprintf("Ê");
     gotoxy(39,8);
       cprintf("Ê");
     gotoxy(39,11);
       cprintf("Ê");
     gotoxy(47,11);
       cprintf("Ê");
     gotoxy(6,20);
       cprintf("Ê");
     gotoxy(39,20);
       cprintf("Ê");
     gotoxy(47,20);
       cprintf("Ê");
     gotoxy(61,20);
       cprintf("Ê");
     gotoxy(59,6);
       cprintf("Î");
     gotoxy(68,20);
       cprintf("Î");
     gotoxy(39,8);
       cprintf("Ê");
     gotoxy(68,22);
       cprintf("Ê");
     gotoxy(39,4);
       cprintf("Ë");
     gotoxy(59,4);
       cprintf("Ë");
     gotoxy(39,9);
       cprintf("Ë");
     gotoxy(47,9);
       cprintf("Ë");
     gotoxy(6,9);
       cprintf("Ë");
     gotoxy(6,11);
       cprintf("Î");
     gotoxy(39,11);
       cprintf("Î");
     gotoxy(47,11);
       cprintf("Î");
     gotoxy(61,11);
       cprintf("Î");
     gotoxy(68,11);
       cprintf("Î");
     gotoxy(6,10);
       cprintf("º");
     gotoxy(39,10);
       cprintf("º");
     gotoxy(47,10);
       cprintf("º");
     gotoxy(61,9);
       cprintf("Ë");
     gotoxy(61,10);
       cprintf("º");
     gotoxy(68,9);
       cprintf("Ë");
     gotoxy(68,10);
       cprintf("º");

}

/*
******************************************************************************
		       FUNCTION FOR THANKS SCREEN
******************************************************************************
*/
 void thanks()
 {
   clrscr();
   textmode(BW40);
  gotoxy(4,11);
  char th[6][10]={"THANKS","FOR","USING","THIS","PROGRAM","!!!!"};

   for(int i=2,j=0 ; i<8 ; i++)
     {
       textcolor(i);
	cprintf(th[j++]);
	cout<<" ";
     }
  delay(3000);
    exit(1);
 }

//===========================END=OF=PROJECT=================================//

//======================PREPARED=BY=KARTIK=AGARWAL==========================//

//=======================SUPPORTED=BY=SUNIL=SIR=============================//