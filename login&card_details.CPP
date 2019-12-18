#include<fstream.h>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>

int price=250;
class Customer
{
 public:
 int atmc;
 char cust_username[10],cust_password[10],atm[16];
 void register_us();
 void validate();

};
void main()
{
 clrscr();
 Customer c;
 int choice;
 cout<<"1.signup 2.login";
 cin>>choice;
 if(choice==1)
   c.register_us();
 else if(choice==2)
   c.validate();
  else
  cout<<"done";
 getch();
}
void Customer::register_us()
{
  char un[10], pw[10];
  ofstream myfile("custy.txt", ios::out | ios::app);
  cout << "Enter Customer Username= " << endl;
  gets(un);
  cout << "Enter Customer Password= " << endl;
  gets(pw);

  myfile << endl << un << "  " << pw << endl;
  myfile.close();
  cout << "Register Successfully." << endl;
  getch();
}
void Customer::validate()
{
    char uname[10], pword[10];
    cout << "enter name: " << endl;
    gets(uname);
    cout << "enter password: " << endl;
    gets(pword);
    fstream myfile("custy.txt",ios::in|ios::out);
    if (myfile)
    {
      while (!myfile.eof())
    {
    myfile>>cust_username;
    myfile>>cust_password;
    if(!strcmp(uname,cust_username))
    {
	if(!strcmp(pword,cust_password))
	{
	    cout<<"Good to go";atmc=0;
	    int infochoice;
	    clrscr();
	    cout<<"Hi";
	    cout<<"\n1.Recent activities";
	    cout<<"\n2.Reviews";
	    cout<<"\n3.Account details";
	    cin>>infochoice;
	    if(infochoice==3)
	    {
		clrscr();
		char q[16];
		for(int n=0;n<16;n++)
		atm[n]='*';
		cout<<"ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
		cout<<"\nº                       º";
		cout<<"\nº  **** **** **** ****  º";
		cout<<"\nº                       º";
		cout<<"\nºÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜº";
		cout<<"\nÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
		delay(100);
		cout<<"\n\nLooks like u need to enter your card details for payment options";delay(100);
		cout<<"\nNo problem,u can do it now";delay(100);
		cout<<"\n****-****-****-****";delay(100);
		cout<<"\nEnter your number";delay(1000);
		for(n=0;n<16;n++)
		{
		  atm[n]=getch();
		  clrscr();
		  cout<<"ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
		  cout<<"\nº                       º";
		  cout<<"\nº  ";
		  for(int i=0;i<16;i++)
		  {
		      if((i!=0)&&(i%4==0))
		      cout<<" ";
		      cout<<atm[i];
		  }
		 cout<<"  º";
		 cout<<"\nº                       º";
		 cout<<"\nºÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜº";
		 cout<<"\nÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
		 if(n==15)
		 {
		    char f;
		    int af;
		    af=1;
		    f=af;
		    cout<<"\nGood!";
		    cout<<f;
		 }
	    }
	    myfile<<atm<<endl;
	    getch();
	    int s=1;


     clrscr();
      for(int w=0;w<16;w++)
    {

     q[w]='*';
	cout<<"ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
     cout<<"\nº                       º";
     cout<<"\nº  ";
     for(int i=0;i<16;i++)
     {
      if((i!=0)&&(i%4==0))
	cout<<" ";
      if(i<w)
	  cout<<q[w];
      else
	 cout<<atm[i];
     }
     cout<<"  º";
     cout<<"\nº                       º";
     cout<<"\nºÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜº";
     cout<<"\nÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
     if(w<12)
     {
      if(w%4!=0)
      {
	gotoxy(w+3,3);

       }
       else if((w!=0)&&(w%4==0))
       {
	gotoxy(w+4+s,3);
	s++;
      }



       cout<<atm[w];
      }
      delay(100);
      if(w<15)
       clrscr();
    }
    }
      getch();
    }

   }
   }
  }
  myfile.close();
}


