//length without spaces
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string string_without_space(string s){
  string s1;
int len =0, sp =0;
    for (int i = 0; s[i] !='\0'; i++)
    {
      if(s[i] ==' '){
sp++;
      }
    else{
           s1.push_back(s[i]);
     
     }
    }
  return s1;
}
int main(){
  string x;
  getline(cin, x);
  string l = string_without_space(x);
  cout<<l<<endl;
}