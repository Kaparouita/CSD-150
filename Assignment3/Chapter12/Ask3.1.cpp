



#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#define NOGDI
#endif

//------------------------------------------------------------------------------

#include "Simple_window.h"    
#include "Graph.h" 
#include "std_lib_facilities.h"

using namespace Graph_lib;

//------------------------------------------------------------------------------
void estimate_coef( vector<int>indep_var , vector<int> dep_var , float& b_1 , float& b_0)
{
    const size_t n = indep_var.size();
    float s_x = 0.f;
    float s_y = 0.f;
    float s_xx = 0.f;
    float s_xy = 0.f;

    for (int i=0;i<n; i++){
        s_x +=indep_var[i];
        s_y +=dep_var[i];

        s_xx += indep_var[i]* indep_var[i];
        s_xy += indep_var[i]* dep_var[i];
    }

    b_1=(n*s_xy - s_x * s_y) / (n* s_xx - s_x * s_x  );
    b_0=(s_y - b_1 * s_x) / n;
    
}

//------------------------------------------------------------------------------

int main ()

{ 
  
 
//------------------------------------------------------------------------------


    Simple_window win(Point(100,100),600,600,"Canvas");
    
//------------------------------------------------------------------------------
   
    Axis xa(Axis::x, Point(20,520), 500, 50, " x "); 
    xa.set_color(Color::black);
    xa.label.set_color(Color::black);                     //Axis x
    win.attach(xa);             

//------------------------------------------------------------------------------
    
    Axis ya(Axis::y, Point(20,520), 500, 50, " y "); 
    ya.set_color(Color::black);
    ya.label.set_color(Color::black);                      //Axis y
    win.attach(ya);  

//-------------------------------------------------------------------------------
//READ CSV FILE AND GET VALUES
//-------------------------------------------------------------------------------
  ifstream file("price.csv");
  vector<int>Price;
  vector<int>Sizee;
  if(!file.is_open()) {return 0;}                   
  else{
  string line;
  
  int i=1;
       while(getline(file,line)) {
           if(i == 1)                                   //skip first line
                line;
           else {                                       
                 string House_size, House_price;
                 stringstream sst(line); 
                 getline(getline (sst, House_size, ','),House_price, ','); 
                
                     int x=stoi(House_size);   Sizee.push_back(x);
                     int y=stoi(House_price);  Price.push_back(y);
                    
                     y=520-y;
                     x=x+20;
                       
                    Mark* t1 = new Mark(Point(x,y),'*');
                        win.attach(*t1);   
               }  
           
    i++;}
    }

//----------------------------------------------------------------------------

float b1,b2;
estimate_coef(Sizee,Price,b1,b2);

float y1,y2,x1,x2;
      
       x1=0; x2=500;
       y1=b2+b1*x1;
       y2=b2+b1*x2;

y1=(520-y1+b2);  x1=x1+20;
y2=(520-y2+b2);  x2=x2+20;

Line c(Point (x1,y1),Point (x2,y2));
c.set_color(Color::red);
win.attach(c);
//------------------------------------------------------------------------------

win.set_label("Linear regression");
win.wait_for_button();
}