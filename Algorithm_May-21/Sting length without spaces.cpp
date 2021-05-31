//length without spaces
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int string_length(string s){
int len =0, sp =0;
    for (int i = 0; s[i] !='\0'; i++)
    {
      if(s[i] ==' '){
sp++;
      }
    else{
          // s1.push_back(s[i]);
     len++;
     }
    }
  return len;
}
int main(){
  string x;
  getline(cin, x);
  int l = string_length(x);
  cout<<l<<endl;
}