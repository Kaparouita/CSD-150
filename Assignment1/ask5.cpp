#include "std_lib_facilities.h"

int main(){
    double value,resta;
    int payment,payment2,r50,r20,r5,tip,c1,c2,c3;
    try{
       cout<<"Please insert the available coins 1,2,3 antoistoixa : "<<"coin 1 :";
       cin>>c1;
       cout<<"coin 2 :";
       cin>>c2;
       cout<<"coin 3 :";
       cin>>c3;
       if(!cin)
        throw(c1,c2,c3);
       }
    catch(int){
        cout<<"error coins";
        return 0;
    }
    cout<<"Please insert the cost of the product(insert -1 to stop) : ";
    try{cin>>value;
        if(!cin||value!=-1&&value<=0)
          throw(value);}
    catch(double){
        cout<<"value error";
        return 0;
    }
    
    while(value!=-1)
    {
      cout<<"please pay using a 200 or 500 or 1000 : ";
    try {cin>>payment;
         if(!cin||payment!=1000&&payment!=500&&payment!=200)
            throw(payment);}
    catch(int){
        cout<<"error pay with 200 or 500 or 1000";
        return 0;
    }        
      value=value*100;
      r50=0; r20=0;  r5=0; tip=0;
   
      while (payment<value)
         { cin>>payment2;
          payment=payment2+payment;}
      resta=payment-value;
    
      {while(resta>(c1-1))
          {resta=resta-c1;
           r50=r50+1;}
              if (resta<-1)
                  {resta=resta+c1;
                  r50=r50-1;}
      }
      { while(resta>c2-1)
          {resta=resta-c2;
           r20=r20+1;}
              if (resta<-1)
                  {resta=resta+c2;
                  r20=r20-1;}
      }   
             
      {while(resta>c3-1)
          {resta=resta-c3;
           r5=r5+1;}
              if (resta<-1)
                  {resta=resta+c3;
                  r5=r5-1;}
      }
       while(resta>0)
          {resta=resta-1;
          tip=tip+1;}
       if(tip>0)
      cout<<"The vending machine cannot give you the following change "<<tip<<'\n';

      cout<<"Your charge is "<<c1<<'x'<<r50<<','<<c2<<'x'<<r20<<','<<c3<<'x'<<r5<<'\n';

      cout<<"Please insert the cost of the product(insert -1 to stop) : ";
      try{cin>>value;
        if(!cin||value!=-1&&value<=0)
          throw(value);}
      catch(double){
        cout<<"value error";
        return 0;}
    
     }
     
return 0;}
