#include "std_lib_facilities.h"

double t;                                       //xronos
double S;                                       //apostash
double H;                                       //ypsos gremoy
const double g=9.8;                           //varyt
double V0;                                      //arxikh taxyt

int main(){

    cin>>V0>>H;
    if(!cin)
       error("mono numbers");
    if(V0<0||H<0)                                           
       error("Den ginetai na einai arnhtikes thmes");
    H=H*1000;                                               //metatroph se metra
    t=sqrt((2*H)/g);
    S=(V0*t)/1000;                                          //diairw me 1000 wste na einai km meta
    cout<<t<<"s xronos p vrisketai ston aera\n"<<S<<"km apostash";
return 0;

}