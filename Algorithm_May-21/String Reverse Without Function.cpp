//Reverse Without strrev
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string string_Reverse(string s){
  string s1;
int len =0, sp =0;
    for (int i=s.size(); i>=0; i--)
    {
      s1.push_back(s[i]);
    }
  return s1;
}
int main(){
  string x;
  getline(cin, x);
  string l = string_Reverse(x);
  cout<<l<<endl;
}