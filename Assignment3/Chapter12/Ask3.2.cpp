#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#define NOGDI
#endif

//------------------------------------------------------------------------------
#include <FL/Fl_Menu_Bar.H>
#include "Graph.h" 
#include "std_lib_facilities.h"
#include "GUI.h"
#include "Window.h"
#include <FL/Fl_File_Chooser.H>

using namespace Graph_lib;
using namespace std;

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_File_Chooser.H>




struct Lines_window : Graph_lib::Window {

public:
    Lines_window(Point xy, int w, int h, const string& title );
    int i=-1;
    int maxi=-1;
   
    
    
    
private:
    Button previus_button;
    Button image_button;
    Button next_button;
    vector<string>images;
   
    static void cb_next(Address, Address); // callback for next_button
    void next(); 
    static void cb_previus(Address, Address); // callback for quit_button
    void previus(); 
    static void cb_image(Address, Address); // callback for image_button
    void image();
    
};

//------------------------------------------------------------------------------

Lines_window::Lines_window(Point xy, int w, int h, const string& title)
    :Window(xy,w,h,title),
    next_button(Point(x_max()-300,300), 150, 40, "Next", cb_next),
    previus_button(Point(x_max()-450,300), 150, 40, "Previus", cb_previus),
    image_button(Point(x_max()-600,0), 150, 40, "Image", cb_image)
    
   { 
    attach(next_button);
    attach(previus_button);
    attach(image_button);
}

//------------------------------------------------------------------------------

void Lines_window::cb_previus(Address, Address pw)   
{  
       reference_to<Lines_window>(pw).previus();
} 

//------------------------------------------------------------------------------
void Lines_window::previus()
{  i=i-1;
   if (i==0)
   {  static Image x(Point(100,50),images[0]);
      x.set_mask (Point(0,0),400,200);
      attach(x);
      redraw();
       }
   else if(i>0)
   {static Image y(Point(100,50),images[i]);
    y.set_mask (Point(0,0),400,200);
    attach(y);
    redraw();  
    }
   
}

//------------------------------------------------------------------------------

void Lines_window::cb_next(Address, Address pw)     
{  
    reference_to<Lines_window>(pw).next();
} 

//------------------------------------------------------------------------------

void Lines_window::next()
{ i=i+1;
    if (i==maxi)
     {  
       static Image x(Point(100,50),images[maxi]);
       x.set_mask (Point(0,0),400,200);
       attach(x);
       redraw();
       }
    else if(i<maxi)
     { 
    static Image y(Point(100,50),images[i]);
    y.set_mask (Point(0,0),400,200);
    attach(y);
    redraw();
    }
   
}

//------------------------------------------------------------------------------
void Lines_window::cb_image(Address, Address pw)     
{   
    reference_to<Lines_window>(pw).image();
} 
//------------------------------------------------------------------------------
void Lines_window::image()
{   
  Fl_File_Chooser chooser("Chapter12","*jpg",Fl_File_Chooser::MULTI,"Choose an image");
   chooser.show();
  while(chooser.shown())
        { Fl::wait();} 
maxi=maxi+1;
i=maxi;
images.push_back(chooser.value(0));
 
 if(maxi==0)
  {   static Image x(Point(100,50),chooser.value());   
       x.set_mask (Point(0,0),400,200);
       attach(x);
       redraw(); }
  else if(maxi==1)  
  {   static Image y(Point(100,50),chooser.value());   
       y.set_mask (Point(0,0),400,200);
       attach(y);
       redraw(); }
  else if(maxi==2)
  {   static Image z(Point(100,50),chooser.value());   
       z.set_mask (Point(0,0),400,200);
       attach(z);
       redraw(); }
}
//------------------------------------------------------------------------------
int main()
{   
    

    Lines_window pw(Point(100,100),600,400,"image");
    
    
    return gui_main();
}

//------------------------------------------------------------------------------

