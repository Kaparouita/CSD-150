
#include "std_lib_facilities.h"
#include "Ask2_Rectangle.h"



int main() {
  double length,width;
  cout<<"Poio einai to platos; :\n";
  try{cin>>length;
      if(!cin||length<0||length>30||length==0)
         throw(length);}
  catch(double){cout<<"To platos prepei na einai 0-30,ektos 0";return 0;}
  Rectangle Platos;                                                                  //PLATOS
  Platos.setPlatos(length);

//.....................................................................//

  cout<<"Poio einai to mhkos;  :\n";
  try{  cin>>width;
         if(!cin||width<0||width>30||width==0)
         throw(width);}
  catch(double){cout<<"To mhkos prepei na einai 0-30,ektos 0";return 0;}
  Rectangle Mhkos;                                                                   //MHKOS
  Mhkos.setMhkos(width);
//.....................................................................//
  Rectangle E,P;
  
  E.getEmvadon(length,width);
  P.getPerimetro(length,width);
 
  
   return 0;
}