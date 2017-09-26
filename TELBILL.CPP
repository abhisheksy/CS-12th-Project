#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
#include<iomanip.h>


int flag=0;
ofstream fout;
ifstream fin;



class tbill
{
public :
float fixamount1,fixamount2,fixamount3,natroamom,natroamim;
float natroamor,natroamir,stdrate,stdmin,smsr;
float gprsrate,gprskb,mmsr;
int sms,mms,billid;
float interroami,interroamir,interroamo,interroamor,misc,grandtotal,isdrate,isdmin;
void entr();
void sho();
void editr();
void calclt();
int ret()
{
return(billid);
}
}x;


void tbill::calclt()
{
x.natroamor = x.natroamom*2;
x.natroamir = x.natroamim*2.5;
x.interroamor=x.interroamo*15;
x.interroamir=x.interroami*17;
x.gprsrate=x.gprskb*0.10;
x.smsr=x.sms*0.50;
x.mmsr=x.mms*3;
x.stdrate=x.stdmin*1;
x.isdrate=x.isdmin*8;
x.grandtotal=x.natroamor + x.natroamir + x.interroamor + x.interroamir + x.gprsrate + x.smsr +
x.mmsr + x.stdrate + x.isdrate + x.misc;
}


void tbill::editr()
{
clrscr();
sho();
cout<<endl<<"==============================================================================";
cout<<endl<<"\t                 Press Any Key To Continue      ";
cout<<endl<<"==============================================================================";
getch();
clrscr();
sho();
cout<<endl<<"==============================================================================";
cout<<endl<<"                     editrt What?????      ";
cout<<endl<<"==============================================================================";
cout<<endl;
cout<<"1. Incoming calcltls\t\t\t6. No of MMS"<<endl;
cout<<"2. No of SMS\t\t\t\t7. ISD calcltls\t\t"<<endl;
cout<<"3. Roaming Incoming calcltls\t\t8. International Roaming Incoming"<<endl;
cout<<"4. Roaming Outgoing calcltls\t\t9. International Roaming Outgoing"<<endl;
cout<<"5. GPRS Usage ( in Kb )\t\t\t10. Miscellaneous Charges  "<<endl;
cout<<"==============================================================================";
cout<<endl<<"entrer  Choice      : ";
int ch;
pp :
cin>>ch;
if(ch==1)
{
cout<<"entrer Incoming calcltls min    : ";
cin>>x.stdmin;
}
if(ch==2)
{
cout<<"entrer SMS    : ";
cin>>x.sms;
}
if(ch==3)
{
cout<<"entrer Roaming in     : ";
cin>>x.natroamim;
}
if(ch==4)
{
cout<<"entrer Roaming out     : ";
cin>>x.natroamom;
}
if(ch==5)
{
cout<<"entrer GPRS Usage    : ";
cin>>x.gprskb;
}
if(ch==6)
{
cout<<"entrer MMS no     : ";
cin>>x.mms;
}
if(ch==7)
{
cout<<"entrer ISD Min    : ";
cin>>x.isdmin;
}
if(ch==8)
{
cout<<"entrer ISD Roam in    : ";
cin>>x.interroami;
}
if(ch==9)
{
cout<<"entrer ISD Roamout    : ";
cin>>x.interroamo;
}
if(ch==10)
{
cout<<"entrer Misc Charge    : ";
cin>>x.misc;
}
if((ch>10)||(ch==0))
{
cout<<"\n\t\t\t\tInvalid Choice !!!!!"<<endl<<"\t\t\t\t";
goto pp;
}
calclt();
fout.write((char *)&x,sizeof(x));
}


void tbill::entr()
{
cout<<endl<<"  Incoming calcltls (mts)        : ";
cin>>x.stdmin;
cout<<endl<<"  No of SMS                   : ";
cin>>x.sms;
cout<<endl<<"  Roaming Incoming calcltls (mts): ";
cin>>x.natroamim;
cout<<endl<<"  Roaming Outgoing calcltls (mts): ";
cin>>x.natroamom;
cout<<endl<<"  GPRS Usage ( in Kb )        : ";
cin>>x.gprskb;
cout<<endl<<"  No of MMS                   : ";
cin>>x.mms;
cout<<endl<<"  ISD calcltls (mts)             : ";
cin>>x.isdmin;
cout<<endl<<"  Inter Roaming Incoming (mts): ";
cin>>x.interroami;
cout<<endl<<"  Inter Roaming Outgoing (mts): ";
cin>>x.interroamo;
cout<<endl<<"  Miscellaneous Charges       : ";
cin>>x.misc;
calclt();
fout.write((char *)&x,sizeof(x));
fout.close();
}


void tbill::sho()
{
cout<<"========================******===================";
cout<<"\t\t        calcltLS          ";
cout<<"\t"<<"      MINUTES/No.";
cout<<"\t"<<"AMOUNT";
cout<<endl;
cout<<"========================******===================";
cout<<endl<<"\t\t  Incoming calcltls          ";
cout<<"\t"<<x.stdmin;
cout<<"\t\t"<<x.stdrate;
cout<<endl<<"\t\t  No of SMS               ";
cout<<"\t"<<x.sms;
cout<<"\t\t"<<x.smsr;
cout<<endl<<"\t\t  Roaming Incoming calcltls   ";
cout<<"\t"<<x.natroamim;
cout<<"\t\t"<<x.natroamir;
cout<<endl<<"\t\t  Roaming Outgoing calcltls   ";
cout<<"\t"<<x.natroamom;
cout<<"\t\t"<<x.natroamor;
cout<<endl<<endl<<"\t\t  GPRS Usage ( in Kb )     ";
cout<<"\t"<<x.gprskb;
cout<<"\t\t"<<x.gprsrate;
cout<<endl<<"\t\t  No of MMS                ";
cout<<"\t"<<x.mms;
cout<<"\t\t"<<x.mmsr;
cout<<endl<<endl<<"\t\t  ISD calcltls                ";
cout<<"\t"<<x.isdmin;
cout<<"\t\t"<<x.isdrate;
cout<<endl<<"\t\t  Inter Roaming Incoming   ";
cout<<"\t"<<x.interroami;
cout<<"\t\t"<<x.interroamir;
cout<<endl<<"\t\t  Inter Roaming Outgoing   ";
cout<<"\t"<<x.interroamo;
cout<<"\t\t"<<x.interroamor;
cout<<endl<<"\t\t  Miscellaneous Charges    ";
cout<<"\t\t\t"<<x.misc;
cout<<endl<<endl<<"\t\t  | Total Charges |           ";
cout<<"\t\t\t"<<x.grandtotal;
}



class customer
{
long phno,acno,pcode;
char name[50],address[50],city[50];
public :
long id;
void ecustdet();
void scustdet();
void dcustdet();
void edcustdet();
long ret()
{
return(id);
}
}a;


void customer::edcustdet()
{
clrscr();
int ch;
cout<<"========================******===================";
cout<<"\t\t\t Currentr Customer Details"<<endl;
cout<<"========================******===================";
scustdet();
cout<<"========================******===================";
cout<<"\t\t\t\t  editrt What ??????      "<<endl;
cout<<"========================******===================";
cout<<endl<<"\t1.Name  2.Address  3.Street  4.Pin Code  5.Ph no  6.A/c no "<<endl;
cout<<"========================******===================";
pp :
cout<<endl<<"\t\t\t\tentrer Option   :  ";
cin>>ch;
if(ch==1)
{
cout<<"\n\t\t\t\tentrer Name  : ";
gets(a.name);
}
if(ch==2)
{
cout<<"\n\t\t\t\tentrer Address : ";
gets(a.address);
}
if(ch==3)
{
cout<<"\n\t\t\t\tentrer Street : ";
gets(a.city);
}
if(ch==4)
{
cout<<"\n\t\t\t\tentrer Pincode : ";
cin>>a.pcode;
}
if(ch==5)
{
cout<<"\n\t\t\t\tentrer Phone No : ";
cin>>a.phno;
}
if(ch==6)
{
cout<<"\n\t\t\t\tentrer A/C no : ";
cin>>a.acno;
}
if((ch>6)||(ch==0))
{
cout<<"\n\t\t\t\tInvalid Choice !!!!!"<<endl<<"\t\t\t\t";
goto pp;
}
fout.write((char *)&a,sizeof(a));
}


void customer::ecustdet()
{
int id;
ret :
fin.open("customer.dat",ios::binary);
fin.seekg(0);
cout<<endl<<"entrer Customer id   : ";
cin>>id;
while(!fin.eof())
{
fin.read((char*)&a,sizeof(a));
int x=a.ret();
if(x==id)
{
cout<<"\n\n\t\tERROR!!! ID ALREADY TAKEN.....CHOSE ANY OTHER ID \n\n";
fin.close();
goto ret;
}
}
fin.close();
a.id=id;
cout<<endl<<"entrer Name          : ";
gets(a.name);
cout<<endl<<"entrer Address       : ";
gets(a.address);
cout<<endl<<"entrer Street        : ";
gets(a.city);
cout<<endl<<"entrer Pincode       : ";
cin>>a.pcode;
cout<<endl<<"entrer Phone No      : ";
cin>>a.phno;
cout<<endl<<"entrer A/C no        : ";
cin>>a.acno;
fout.write((char *)&a,sizeof(a));
fout.close();
}


void customer::scustdet()
{
cout<<endl<<"\tName      : ";
puts(a.name);
cout<<"\t\t\t\t\t\t"<<"ID NO      : ";
cout<<a.id;
cout<<endl<<"\tAddress   : ";
puts(a.address);
cout<<"\t\t\t\t\t\t"<<"Phone No   : ";
cout<<a.phno;
cout<<endl<<"\tStreet    : ";
puts(a.city);
cout<<"\t\t\t\t\t\t"<<"A/C no     : ";
cout<<a.acno;
cout<<endl<<"\tPincode   : ";
cout<<a.pcode<<endl;
}




void main()
{
clrscr();
int ch,cid;
y:
gotoxy(1,5);
cout<<"========================******===================";
gotoxy(32,6);
cout<<"TELEPHONE BILLER";
cout<<endl;
cout<<"========================******===================";
gotoxy(27,10);
cout<<"1) entrER CUSTOMER DATABASE";
gotoxy(27,13);
cout<<"2) entrER BILL  DATABASE";
gotoxy(27,16);
cout<<"3) entrER  BILLING  DETAILS";
gotoxy(27,19);
cout<<"4) EXIT  FROM  PROGRAM"<<endl<<endl;
cout<<"========================******===================";
cout<<endl<<"        entrer Your Choice     : ";
gotoxy(1,25);
cout<<"========================******===================";
gotoxy(35,22);
cin>>ch;
switch(ch)
{
case 1:
clrscr();
int op=0;
x:
clrscr();
cout<<endl<<endl;
cout<<"********************************************************************************";
cout<<endl;
cout<<"\t\t\t    CUSTOMER SECTION";
cout<<endl;
cout<<"\t\t\t    ================";
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t1) ADD\n\n";
cout<<"\t\t\t\t2) editrT\n\n";
cout<<"\t\t\t\t3) DELETE\n\n";
cout<<"\t\t\t\t4) VIEW  \n\n";
cout<<"\t\t\t\t5) BACK to MAIN";
cout<<endl<<endl<<endl;
cout<<"********************************************************************************";
cout<<endl<<"        entrer Your Choice     : ";
cin>>op;

		if(op==1)
		{
		clrscr();
		cout<<"========================******===================";
		cout<<endl;
		cout<<"\t\t\tYOU HAVE CHOSEN TO ADD CUSTOMER";
		cout<<endl<<endl;
		cout<<"========================******===================";
		fout.open("customer.dat",ios::binary|ios::app);
		a.ecustdet();
		clrscr();
		cout<<"========================******===================";
		cout<<endl;
		cout<<"\t\t\tCUSTOMER ADDED SUCCESSFULLY";
		cout<<endl<<endl;
		cout<<"========================******===================";
		getch();
		goto x;
		}
if(op==2)
{
flag=0;
int r=0;
clrscr();
cout<<"========================******===================";
cout<<endl;
cout<<"\t\t\tYou Have chosen to editrT CUSTOMER";
cout<<endl;
cout<<"========================******===================";
cout<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\t\t    entrer CUSTOMER id to be editrTED     : ";
cin>>cid;
clrscr();
fin.open("customer.dat",ios::binary);
fout.open("customer.dat",ios::binary|ios::app);
if(!fin)
{
cout<<"\n\nFile Not Found...";
goto x;
}
fin.seekg(0);
while(!fin.eof())
{
r++;
fin.read((char*)&a,sizeof(a));
if(!fin.eof())
{
int x=a.ret();
if(x==cid)
{
flag=1;
fout.seekp((r-1)*sizeof(a));
a.edcustdet();
fout.close();
fin.close();
clrscr();
cout<<"========================******===================";
cout<<"\t\t\tCUSTOMER editrTED SUCCESSFULLY";
cout<<endl;
cout<<"========================******===================";
getch();
goto x;
}}}
if(flag==0)
{cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCUSTOMER DOESNOT EXIST...";
getch();
fin.close();
clrscr();
goto x;
}}
		if(op==3)
		{
		flag=0;
		clrscr();
		cout<<"========================******===================";
		cout<<"\t\t\tYou Have chosen to DELETE CUSTOMER";
		cout<<endl<<endl;
		cout<<"========================******===================";
		cout<<"\n\n\n\n\n\n\n\n\n\t\t    entrer CUSTOMER id to be DELETED     : ";
		cin>>cid;
		char sure;
		fin.open("customer.dat",ios::binary);
		if(!fin)
		{
		cout<<"\n\nFile Not Found...";
		goto x;}
		fstream tmp("temp.dat",ios::binary|ios::out);
		fin.seekg(0);
		while(fin.read((char*)&a, sizeof(a)))
		{
		int x=a.ret();
		if(x!=cid)
		tmp.write((char*)&a,sizeof(a));
		else
		{
		flag=1;
		clrscr();
		cout<<"========================******===================";
		cout<<"\t\t\tAre You SURE You Want To DELETE This";
		cout<<endl<<endl;
		cout<<"========================******===================";
		a.scustdet();
		cout<<"========================******===================";
		cout<<endl<<"\n\n\n\n\n\n\n\t\tentrer 'y' for YES or ANY other key for cancel   :";
		cin>>sure;
		if(sure!='y')
		{
		clrscr();
		tmp.close();
		fin.close();
		goto x;
		}}}
		clrscr();
		fin.close();
		tmp.close();
		fout.open("customer.dat",ios::trunc|ios::binary);
		fout.seekp(0);
		tmp.open("temp.dat",ios::binary|ios::in);
		if(!tmp)
		{
		cout<<"Error in File";
		goto x;}
		while(tmp.read((char*)&a,sizeof(a)))
		fout.write((char*)&a,sizeof(a));
		tmp.close();
		fout.close();
		if(flag==1)
		{
		clrscr();
		a.id=-32;
		cout<<"========================******===================";
		cout<<endl;
		cout<<"\t\t\tCUSTOMER DELETED SUCCESSFULLY";
		cout<<endl<<endl;
		cout<<"========================******===================";
		getch();
		flag=0;
		fin.open("bill.dat",ios::binary);
		if(!fin)
		{
		cout<<"\n\nFile Not Found...";
		goto x;
		}
		fstream tmp("temp.dat",ios::binary|ios::out);
		fin.seekg(0);
		while(fin.read((char*)&x, sizeof(x)))
		{
		int zx=x.ret();
		if(zx!=cid)
		tmp.write((char*)&x,sizeof(x));
		else
		{
		flag=1;
		}}
		tmp.close();
		fin.close();
		x.billid=-32;
		fout.open("bill.dat",ios::trunc|ios::binary);
		fout.seekp(0);
		tmp.open("temp.dat",ios::binary|ios::in);
		if(!tmp)
		{
		cout<<"Error in File";
		getch();
		goto x;
		}
		while(tmp.read((char*)&x,sizeof(x)))
		fout.write((char*)&x,sizeof(x));
		tmp.close();
		fout.close();
		if(flag==1)
		{clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tBILL OF THIS CUSTOMER ALSO DELETED......";
		getch();
		clrscr();
		goto x;
		}
		if(flag==0)
		{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tNO BILL FOUND TO DELETE......";
		getch();
		fin.close();
		clrscr();
		goto x;
		}
		clrscr();
		goto x;}
		if(flag==0)
		{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCUSTOMER DOESNOT EXIST...";
		getch();
		fin.close();
		clrscr();
		goto x;
		}}
if(op==4)
{
flag=0;
clrscr();
cout<<"========================******===================";
cout<<endl;
cout<<"\t\t\tYou Have chosen to VIEW CUSTOMER";
cout<<endl<<endl;
cout<<"========================******===================";
cout<<"\n\n\n\n\n\n\n\n\n\t\t    entrer CUSTOMER id to be VIEWED     : ";
cin>>cid;
clrscr();
cout<<"\n\n\n\n\n\n\n";
fin.open("customer.dat",ios::binary);
if(!fin)
{
cout<<"\n\nFile Not Found...";
goto x;
}
fin.seekg(0);
while(!fin.eof())
{
fin.read((char*)&a,sizeof(a));
int x=a.ret();
if(x==cid)
{
flag=1;
a.scustdet();
fin.close();
getch();
clrscr();
goto x;
}}
if(flag==0)
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCUSTOMER DOESNOT EXIST...";
getch();
fin.close();
clrscr();
goto x;
}}


if(op==5)
{
clrscr();
goto y;
}


if((op>5)||(op==0))
{
clrscr();
cout<<"========================******===================";
cout<<endl;
cout<<"\t\t\tINVALID CHOICE TRY AGAIN   ";
cout<<endl<<endl;
cout<<"========================******===================";
goto x;
}
break;


case 2:
clrscr();
int sel;
z:
clrscr();
cout<<endl<<endl;
cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";
cout<<endl;
cout<<"\t\t\t\tBILLING  SECTION";
cout<<endl;
cout<<"\t\t\t\t================";
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t1) ADD   \n\n";
cout<<"\t\t\t\t2) editrT  \n\n";
cout<<"\t\t\t\t3) DELETE\n\n";
cout<<"\t\t\t\t4) SHOW  \n\n";
cout<<"\t\t\t\t5) BACK to MAIN";
cout<<endl<<endl<<endl;
cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";
cout<<endl<<"        entrER YOUR CHOICE      : ";
cin>>sel;
		if(sel==1)
		{
		rett :
		clrscr();
		flag=0;
		cout<<"========================******===================";
		cout<<endl;
		cout<<"\t\t\tYou Have Chosen To ADD BILL";
		cout<<endl<<endl;
		cout<<"========================******===================";
		cout<<"\n\n\n\t\tentrer CUSTOMER id to ADD BILL    : ";
		cin>>cid;
		cout<<"========================******===================";
		fin.open("customer.dat",ios::binary);
		if(!fin)
		{
		cout<<"\n\nFile Not Found...";
		goto z;}
		fin.seekg(0);
		while(!fin.eof())
		{
		fin.read((char*)&a,sizeof(a));
		long x=a.ret();
		if(x==cid)
		{
		flag=1;
		a.scustdet();
		fin.close();
		goto bill;
		}}
		if(flag==0)
		{
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCUSTOMER DOESNOT EXIST...";
		getch();
		fin.close();
		clrscr();
		goto z;
		}
		bill :
		fin.open("bill.dat",ios::binary);
		fin.seekg(0);
		while(!fin.eof())
		{
		fin.read((char*)&x,sizeof(x));
		int xp=x.ret();
		if(xp==cid)
		{clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t CUSTOMER ALREADY BILLED !!!!!\n\n";
		fin.close();
		getch();
		goto rett;
		}}
		fin.close();
		flag=0;
		fout.open("bill.dat",ios::binary|ios::app);
		x.billid=cid;
		x.entr();
		clrscr();
		cout<<"========================******===================";
		cout<<endl;
		cout<<"\t\t\tBILL ADDED SUCCESSFULLY";
		cout<<endl<<endl;
		cout<<"========================******===================";
		getch();
		goto z;
		}
if(sel==2)
{
flag=0;
int r=0;
clrscr();
cout<<"========================******===================";
cout<<endl;
cout<<"\t\t\tYou Have chosen to editrT BILL";
cout<<endl;
cout<<"========================******===================";
cout<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\t\t    entrer CUSTOMER id to editrT BILL     : ";
cin>>cid;
clrscr();
fin.open("customer.dat",ios::binary);
if(!fin)
{
cout<<"\n\nFile Not Found...";
goto z;}
fin.seekg(0);
while(!fin.eof())
{
fin.read((char*)&a,sizeof(a));
long x=a.ret();
if(x==cid)
{
flag=1;
a.scustdet();
fin.close();
cout<<"\n\n\tPress Any Key To Continue editrting Bill of This Customer...";
getch();
clrscr();
goto bill2;
}}
if(flag==0)
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCUSTOMER DOESNOT EXIST...";
getch();
fin.close();
clrscr();
goto z;
}
bill2 :
flag=0;
fin.open("bill.dat",ios::binary);
fout.open("bill.dat",ios::binary|ios::app);
if(!fin)
{
cout<<"\n\nFile Not Found...";
goto z;
}
fin.seekg(0);
while(!fin.eof())
{
r++;
fin.read((char*)&x,sizeof(x));
if(!fin.eof())
{
int kkx=x.ret();
if(kkx==cid)
{
flag=1;
fout.seekp((r-1)*sizeof(x));
x.editr();
fout.close();
fin.close();
clrscr();
cout<<"========================******===================";
cout<<"\t\t\tBILL editrted SUCCESSFULLY";
cout<<endl;
cout<<"========================******===================";
getch();
goto z;
}}}
if(flag==0)
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tBILL DOESNOT EXIST......";
getch();
fin.close();
clrscr();
goto z;
}}
		if(sel==3)
		{
		flag=0;
		clrscr();
		cout<<"========================******===================";
		cout<<"\t\t\tYou Have chosen to DELETE BILL";
		cout<<endl<<endl;
		cout<<"========================******===================";
		cout<<"\n\n\n\n\n\n\n\n\n\t\t    entrer CUSTOMER id to DELETE BILL     : ";
		cin>>cid;
		char sure;
		clrscr();
		fin.open("customer.dat",ios::binary);
		if(!fin)
		{
		cout<<"\n\nFile Not Found...";
		goto z;}
		fin.seekg(0);
		while(!fin.eof())
		{
		fin.read((char*)&a,sizeof(a));
		long x=a.ret();
		if(x==cid)
		{
		flag=1;
		a.scustdet();
		fin.close();
		cout<<"\n\n\tPress Any Key To Continue Deleting Bill of This Customer...";
		getch();
		clrscr();
		goto bill3;
		}}
		if(flag==0)
		{
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCUSTOMER DOESNOT EXIST...";
		getch();
		fin.close();
		clrscr();
		goto z;
		}
		bill3 :
		flag=0;
		fin.open("bill.dat",ios::binary);
		if(!fin)
		{
		cout<<"\n\nFile Not Found...";
		goto z;}
		fstream tmp("temp.dat",ios::binary|ios::out);
		fin.seekg(0);
		while(fin.read((char*)&x, sizeof(x)))
		{
		int zx=x.ret();
		if(zx!=cid)
		tmp.write((char*)&x,sizeof(x));
		else
		{
		flag=1;
		clrscr();
		cout<<"========================******===================";
		cout<<"\t\tAre You Sure You Want To DELETE This???????";
		cout<<endl;
		cout<<"========================******===================";
		x.sho();
		cout<<endl<<"========================******===================";
		cout<<"\n\t\tentrer 'y' for YES or ANY other key for CANCEL   :";
		cin>>sure;
		if(sure!='y')
		{
		clrscr();
		tmp.close();
		fin.close();
		goto z;}}}
		clrscr();
		fin.close();
		tmp.close();
		x.billid=-32;
		fout.open("bill.dat",ios::trunc|ios::binary);
		fout.seekp(0);
		tmp.open("temp.dat",ios::binary|ios::in);
		if(!tmp)
		{
		cout<<"Error in File";
		goto z;
		}
		while(tmp.read((char*)&x,sizeof(x)))
		fout.write((char*)&x,sizeof(x));
		tmp.close();
		fout.close();
		if(flag==1)
		{
		clrscr();
		cout<<"========================******===================";
		cout<<endl;
		cout<<"\t\t\tBILL DELETED SUCCESSFULLY";
		cout<<endl<<endl;
		cout<<"========================******===================";
		getch();
		clrscr();
		goto z;
		}
		if(flag==0)
		{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tBILL DOESNOT EXIST......";
		getch();
		fin.close();
		clrscr();
		goto z;
		}}
if(sel==4)
{
flag=0;
clrscr();
cout<<"========================******===================";
cout<<endl;
cout<<"\t\t\tYou Have chosen to VIEW BILL";
cout<<endl<<endl;
cout<<"========================******===================";
cout<<"\n\n\n\n\n\n\n\n\n\t\t    entrer CUSTOMER id to VIEW BILL     : ";
cin>>cid;
clrscr();
fin.open("customer.dat",ios::binary);
if(!fin)
{
cout<<"\n\nFile Not Found...";
goto z;}
fin.seekg(0);
while(!fin.eof())
{
fin.read((char*)&a,sizeof(a));
long x=a.ret();
if(x==cid)
{
flag=1;
a.scustdet();
fin.close();
goto bill4;
}}
if(flag==0)
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCUSTOMER DOESNOT EXIST...";
getch();
fin.close();
clrscr();
goto z;
}
bill4:
flag=0;
fin.open("bill.dat",ios::binary);
if(!fin)
{
cout<<"\n\nFile Not Found...";
goto z;}
fin.seekg(0);
while(!fin.eof())
{
fin.read((char*)&x,sizeof(x));
int px=x.ret();
if(px==cid)
{
flag=1;
x.sho();
fin.close();
getch();
clrscr();
goto z;
}}
if(flag==0)
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tBILL DOESNOT EXIST......";
getch();
clrscr();
fin.close();
goto z;
}}


if(sel==5)
{
clrscr();
goto y;
}


if((sel>5)||(sel==0))
{
clrscr();
cout<<"========================******===================";
gotoxy(28,2);
cout<<"INVALID CHOICE TRY AGAIN   ";
cout<<endl;
cout<<"========================******===================";
goto z;
}
break;




case 3:
char f[1];
clrscr();
cout<<"========================******===================";
cout<<endl;
cout<<"\t\t\t\tBILLING DETAILS";
cout<<endl<<endl;
cout<<"========================******===================";
cout<<"\t\t STD RATE = Rs.1/minute"<<endl<<endl;
cout<<"\t\t National Roaming Outgoing RATE = Rs.2/minute"<<endl<<endl;
cout<<"\t\t National Roaming Incoming RATE = Rs.2.5/minute"<<endl<<endl;
cout<<"\t\t SMS RATE = Rs.0.50/SMS"<<endl<<endl;
cout<<"\t\t MMS RATE = Rs.3/MMS"<<endl<<endl;
cout<<"\t\t GPRS RATE = Rs.0.10/kb"<<endl<<endl;
cout<<"\t\t ISD RATE = Rs.8/minute"<<endl<<endl;
cout<<"\t\t International Roaming Outgoing RATE = Rs.15/minute"<<endl<<endl;
cout<<"\t\t International Roaming Incoming RATE = Rs.17/minute"<<endl<<endl;
gets(f);
clrscr();
goto y;



case 4:
clrscr();
char s;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\tAre You Sure ??? ( entrer 'y' for YES and ANY key for NO )    :";
cin>>s;
if(s=='y')
{
cout<<"\n\n\n    I readily acknowledge my indebtedness to  miss, our computer teachers \n       MR. AMITABH MISHRA AND MRS. ANSHU RANI SINGH for their support, \n        deditrcation and honest efforts that has given me immense help \n                         in completing this project."<<endl;
cout<<"\n\n\n\t\tSCHOOL: KENDRIYA VIDYALAYA AIR FORCE STATION BIDAR"<<endl;
cout<<"\n\t\tMADE BY- ABHISHEK SINGH YADAV\n\t\tROLL NO:4618691\n\t\tACADAMIC YEAR: 2013-14"<<endl;
getch();
exit(0);
}
if(s!='y')
{
clrscr();
goto y;
}



default:
clrscr();
cout<<"========================******===================";
gotoxy(28,2);
cout<<"INVALID CHOICE TRY AGAIN   ";
cout<<endl;
cout<<"========================******===================";
goto y;
}
getch();
}
