//length without spaces
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void to_upper(string s){
  string s1;
  for (int i = 0; i < s.size(); i++)
  {
    s1.push_back(s[i]-32);
  }
for (int i = 0; i < s1.size(); i++)
{
  cout<<s1[i];
}
    
}
int main(){
  string x;
  getline(cin, x);
  to_upper(x);
  
}