#include "std_lib_facilities.h"

int main(){
    string s1,flag1,flag2,c;
    flag1='(';
    flag2=')';
    c="clean";
    cout<<"vale string\n";
    getline(cin,s1);
    for (int i=0;i<s1.length();i++){
      for(int j=0;j<s1.length();j++){
        if (s1[i]='('){
            if (s1[j]=')')
              s1[i]=c;
              s1[j]=c;
              break;}
              }
              }
    for (int i=0;i<s1.length();i++)
         {if(s1[i]='('||s1[i]=')')
            {cout<<"wrong at posittion"<<i;}
          else
             cout<<"complete";}
return 0;}
        
    
