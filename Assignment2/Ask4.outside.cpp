#include<iostream>
#include <Ask4.h>

using namespace std;
using namespace Prakseis;

int main(){
    float a;
    float b;
try{cout<<"Number 1 :  ";
    cin>>a;
    cout<<"Number 2 :  ";
    cin>>b;
    if(!cin)throw maths::Invalid();
    maths::Add(a,b);
    cout<<"Add :       "<<maths::Add(a,b)<<'\n';
    maths::Subtract(a,b);
    cout<<"Subtract :  "<<maths::Subtract(a,b)<<'\n';
    maths::Multiply(a,b);
    cout<<"Multiply :  "<<maths::Multiply(a,b)<<'\n';
    maths::Divide(a,b);
    if(b==0)throw maths::Invalid();
    cout<<"Divide :    "<<maths::Add(a,b)<<'\n';
}
catch(maths::Invalid){
    cerr<<"error:Invalid number\n";
    return 1;
}
 
    
    return 0;
}
