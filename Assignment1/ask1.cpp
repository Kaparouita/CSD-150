#include"std_lib_facilities.h"

using namespace std;

int main(){
   double x,y,z;
   double vector_magnitude(double x,double y);
   double vector_magnitude(double x,double y,double z);
   int diast;
   cout<<"Poses diastaseis exei to dianhsma,grapse 2,3 antistoixa\n"; 
   cin>>diast;
   if(!cin)
      error("Den phra 2 h 3 gia diastaseis");
   if(diast<2||3<diast)
      error("To programma einai gia 2 h 3 diastaseis");
   
     if(diast==2){
             cout<<"grapse 2 diastaseis,x,y\n";
             cin>>x>>y;
             if(!cin)
                error("Den phra arithmoys");
             if(x<0||y<0)
                error("k");
             cout<<"to metro toy dianysmatos einai\n"<<sqrt(x*x+y*y);
             }
     else if(diast==3){
             cout<<"grapse 3 diastaseis,x,y,z\n";
             cin>>x>>y>>z;
             if(!cin)
                error("Den phra arhthmoys");
             if(x<0||y<0||z<0)
                error("den mporw na ypologisw to metro me arnhtiko");
             cout<<"to metro toy dianysmatos einai\n"<<sqrt(x*x+y*y+z*z);
            }
    return 0;
   
}