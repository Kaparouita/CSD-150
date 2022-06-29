
#include "std_lib_facilities.h"
#define Rectangle_h

class Rectangle {
  private:
    // Private attribute
    double Platos,p;
    double Mhkos,m;
    double Emvadon,Perimetro;
  public:
    // Set
     void setPlatos(double p) {
      Platos = p;
    }
    void setMhkos(double m) {
      Mhkos = m;
    }
    // Get
    double getPlatos() {
      return Platos;}
    
    double getMhkos() {
      return Mhkos;
    }
    // Emvadon
    
    double getEmvadon(double l,double w)
    {
        Emvadon = l * w;
        cout << "Emvadon :    " << Emvadon << "\n";
        return 0;
    }
    //Perimetros
    double getPerimetro(double l,double w)
    {
        Perimetro = (l*2)+(w*2);
        cout << "Perimetros : " << Perimetro << "\n";
        return 0;
    }
};