#include "std_lib_facilities.h"

int main()
{
   vector<int>Charges(5);
  cout<<"Poses meres danisteike o kathe pelaths\n"<<"Client 1:  ";
  try{cin>>Charges[0];
     if(!cin||Charges[0]<1||Charges[0]>14)
       throw(Charges[0]);}
  catch(int){
    cout<<"Mporeis na daneisteis mono 14 meres";
    return 0;
  }
  cout<<"Client 2:  ";
  try{cin>>Charges[1];
  if(!cin||Charges[1]<1||Charges[1]>14)
       throw(Charges[1]);}
  catch(int){
    cout<<"Mporeis na daneisteis mono 14 meres";
    return 0;
  }
  cout<<"Client 3:  ";
  try{cin>>Charges[2];
  if(!cin||Charges[2]<1||Charges[2]>14)
       throw(Charges[2]);}
  catch(int){
    cout<<"Mporeis na daneisteis mono 14 meres";
    return 0;
  }
  cout<<"Client 4:  ";                                                               
  try{cin>>Charges[3];
  if(!cin||Charges[3]<1||Charges[3]>14)
       throw(Charges[3]);}
  catch(int){
    cout<<"Mporeis na daneisteis mono 14 meres";
    return 0;
  }
  cout<<"Client 5:  ";
  try{cin>>Charges[4];
  if(!cin||Charges[4]<1||Charges[4]>14)
       throw(Charges[4]);}
  catch(int){
    cout<<"Mporeis na daneisteis mono 14 meres";
    return 0;
  }
//.......................................................................//           POSES MERES MERES

double c1,c2,c3,c4,c5;
c1=((Charges[0]*1.5)-4.5+2);
if(c1==18.5)c1=17.5;
c2=((Charges[1]*1.5)-4.5+2);
if(c2==18.5)c2=17.5;
c3=((Charges[2]*1.5)-4.5+2);
if(c3==18.5)c3=17.5;
c4=((Charges[3]*1.5)-4.5+2);
if(c4==18.5)c4=17.5;
c5=((Charges[4]*1.5)-4.5+2);
if(c5==18.5)c5=17.5;

if(Charges[0]<4)c1=2;  if(Charges[1]<4)c2=2;  if(Charges[2]<4)c3=2;  if(Charges[3]<4)c4=2;  if(Charges[4]<4)c5=2;

//.........................................................................//        POSO XREWSHS
double sum=c1+c2+c3+c4+c5; int days=Charges[0]+Charges[1]+Charges[2]+Charges[3]+Charges[4];
ofstream x;
  x.open ("Ask3_Charges.txt");
  x <<fixed <<setprecision(2)
    <<"-----------------------------------------------\n"
    <<"            Table_of_Clients:                  \n"
    <<"-----------------------------------------------\n"
    <<"             Charge        Days                 \n";
   x <<"Client_1     "<<c1<<"           ";if (c1<10)x<<' ';x<<Charges[0]<<"\n";
   x <<"Client_2     "<<c2<<"           ";if (c2<10)x<<' ';x<<Charges[1]<<"\n";
   x <<"Client_3     "<<c3<<"           ";if (c3<10)x<<' ';x<<Charges[2]<<"\n";
   x <<"Client_4     "<<c4<<"           ";if (c4<10)x<<' ';x<<Charges[3]<<"\n";
   x <<"Client_5     "<<c5<<"           ";if (c5<10)x<<' ';x<<Charges[4]<<"\n";
   x<<"-----------------------------------------------\n";
   x<<" Sum:        "<<sum<<"           "<<days<<"\n";
   x<<"-----------------------------------------------\n";
 
 x.close();
 cout<<"To arxeio txt einai sth thesh Build/Debug me to onoma Ask3_Charges";
return 0;
}
