#include<iostream.h>
#include<fstream.h>
#include<process.h>
#include<dos.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch;
 int a=0;
gotoxy(10,10);
cout<<"1)Now Playing \n";
gotoxy(12,11);
cout<<"a)Croods\n";
gotoxy(12,12);
cout<<"b)Ice age\n";
gotoxy(12,13);
cout<<"c)Incredibles\t\t\t\t";
gotoxy(30,10);
cout<<"2)Up coming";
gotoxy(30,11);
cout<<"a)Zootopia";
gotoxy(30,12);
cout<<"b)Baby boss";
gotoxy(30,13);
cout<<"c)Justice league";
do
{
 ch=getch();
 clrscr();
 if(ch=='y')
 {
  if(a==1)
  { ifstream fin;
   fin.open("movie1.txt",ios::in);
     while(!fin.eof())
  {
   delay(10);
   fin.get(ch);
   cout<<ch;
  }
  getch();
  goto cub;
  fin.close();
  }
  if(a==2)
  { ifstream fin;
   fin.open("movie2.txt",ios::in);
     while(!fin.eof())
  {
   delay(100);
   fin.get(ch);
   cout<<ch;
  }
  getch();
  goto cub;
  fin.close();
  }
  if(a==3)
  { ifstream fin;
   fin.open("movie3.txt",ios::in);
     while(!fin.eof())
  {
   delay(100);
   fin.get(ch);
   cout<<ch;
  }
  getch();
  goto cub;
  fin.close();
  }

  if(a>3)
  { ifstream fin;
   fin.open("movie4.txt",ios::in);
     while(!fin.eof())
  {
   delay(100);
   fin.get(ch);
   cout<<ch;
  }
  getch();
  goto cub;
  fin.close();
  }

 }
 if(ch=='e')
 {
  cout<<"\nBye";
  exit(1);
 }
 if(ch=='s')
 {
 a++;
 lion:

 cub:
 clrscr();
 if(a==1)
{    gotoxy(10,10);

cout<<"1)Now Playing \n";
gotoxy(12,11);
textcolor(12);
cprintf("a)Croods\n");
gotoxy(12,12);
cout<<"b)Ice age\n";
gotoxy(12,13);
cout<<"c)Incredibles\t\t\t\t";
gotoxy(30,10);
cout<<"2)Up coming";
gotoxy(30,11);
cout<<"a)Zootopia";
gotoxy(30,12);
cout<<"b)Baby boss";
gotoxy(30,13);
cout<<"c)Justice league";
}
else if(a==2)
{
gotoxy(10,10);
cout<<"1)Now Playing \n";
gotoxy(12,11);
cout<<"a)Croods\n";
gotoxy(12,12);
textcolor(12);
cprintf("b)Ice age\n");
gotoxy(12,13);
cout<<"c)Incredibles\t\t\t\t";
gotoxy(30,10);
cout<<"2)Up coming";
gotoxy(30,11);
cout<<"a)Zootopia";
gotoxy(30,12);
cout<<"b)Baby boss";
gotoxy(30,13);
cout<<"c)Justice league";

}
else if(a==3)
{
 gotoxy(10,10);
cout<<"1)Now Playing \n";
gotoxy(12,11);
cout<<"a)Croods\n";
gotoxy(12,12);
cout<<"b)Ice age\n";
gotoxy(12,13);
textcolor(12);
cprintf("c)Incredibles");
gotoxy(30,10);
cout<<"2)Up coming";
gotoxy(30,11);
cout<<"a)Zootopia";
gotoxy(30,12);
cout<<"b)Baby boss";
gotoxy(30,13);
cout<<"c)Justice league";

}
else if(a==4)
{
gotoxy(10,10);
cout<<"1)Now Playing \n";
gotoxy(12,11);
cout<<"a)Croods\n";
gotoxy(12,12);
cout<<"b)Ice age\n";
gotoxy(12,13);
cout<<"c)Incredibles\t\t\t\t";
gotoxy(30,10);

cout<<"2)Up coming";
gotoxy(30,11);
textcolor(12);
cprintf("a)Zootopia");
gotoxy(30,12);
cout<<"b)Baby boss";
gotoxy(30,13);
cout<<"c)Justice league";

}
else if(a==5)
{
 gotoxy(10,10);
cout<<"1)Now Playing \n";
gotoxy(12,11);
cout<<"a)Croods\n";
gotoxy(12,12);
cout<<"b)Ice age\n";
gotoxy(12,13);
cout<<"c)Incredibles\t\t\t\t";
gotoxy(30,10);
cout<<"2)Up coming";
gotoxy(30,11);
cout<<"a)Zootopia";
gotoxy(30,12);
textcolor(12);
cprintf("b)Baby boss");
gotoxy(30,13);
cout<<"c)Justice league";

}
else if(a==6)
{
gotoxy(10,10);
cout<<"1)Now Playing \n";
gotoxy(12,11);
cout<<"a)Croods\n";
gotoxy(12,12);
cout<<"b)Ice age\n";
gotoxy(12,13);
cout<<"c)Incredibles\t\t\t\t";
gotoxy(30,10);
cout<<"2)Up coming";
gotoxy(30,11);
cout<<"a)Zootopia";
gotoxy(30,12);
cout<<"b)Baby boss";
gotoxy(30,13);
textcolor(12);
cprintf("c)Justice league");

}
if(a>6)
{
a=1;
 goto lion;
}
}

}while(ch!='b');
getch();
}
