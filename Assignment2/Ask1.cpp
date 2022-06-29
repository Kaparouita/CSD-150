#include "std_lib_facilities.h"

vector<int> recusrsive(76);
bool key_found=0;
int key_found_place;
int key;
int j=0;
int arxikh_thesh=0;
bool key_found_outside=0;

int main(){

//............................//

for (int i=0;i<76;i++){
     recusrsive[i]=j;                         //vector 0-150 even
     j=j+2;
}

//............................//
cout<<"Poios einai o arithmos kleidi(zugoi 0-150) :\n";
try{
  cin>>key;
  if(!cin||key<0||key>150)
     throw(key);}
catch(int){
    cout<<"Den edwses arithmo h htan ektos oriwn zugoi 0-150";
    return 0;}
cout<<"Poia einai h arxikh thesh toy vector (diatheshmes theseis 0-75) :\n";
try{
    cin>>arxikh_thesh;
    if(!cin||arxikh_thesh<0||arxikh_thesh>76)
      throw(arxikh_thesh);}
catch(int){
    cout<<"H arxhikh thesh prepei na einai entws twn thesewn toy vector 0-75";
    return 0;}
        
for(int i=arxikh_thesh;i<76;i++){
   if (key==recusrsive[i])
   {
       key_found=1;                          //Looking for key
       key_found_place=i;
   }
}
if (key_found==0){
    for(int i=arxikh_thesh;i>-1;i=i-1){
        if (key==recusrsive[i]){             //An to kleidi einai mesa se vector alla oxi stous arithoumous p epsakse
             key_found_outside=1;
        }
    }
}

//............................//

if (key_found==1)
    cout<<"Your key found in possition :  "<<key_found_place;
else if (key_found_outside==1)
    cout<<"-1";
else
    cout<<"Den edwses arithmo h htan ektos oriwn zugoi 0-150";

return 0;
}
