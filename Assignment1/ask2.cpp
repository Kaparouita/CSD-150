#include"std_lib_facilities.h"

int main ()
{
string word3;
string word1;
string word2;
cout << "enter word 1";
getline (cin,word1);
cout << "enter word 2";
getline (cin,word2);
      if(word2.length()>word1.length()){
            word3=word2;
            int w3=word1.length();
            word3.erase(0,w3);
         for (int i = 0; i < word1.length(); i++){  //WORD 2
             cout<<word1[i]<<word2[i];}
        cout<<word3;}
      else if (word1.length()>=word2.length()){
            word3=word1;
            int w3=word2.length();
            word3.erase(0,w3);
         for (int i = 0; i < word2.length(); i++){  //WORD 1
             cout<<word1[i]<<word2[i];}
        cout<<word3;}
  return 0;
}