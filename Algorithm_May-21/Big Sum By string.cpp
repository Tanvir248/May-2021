#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string bigSum(string x, string y){
      string s="";
     int carry = 0;
     int n1 = x.size(), n2 = y.size();
     if(n1>n2)
      swap(x, y);
  reverse(x.begin(), x.end());
  reverse(y.begin(), y.end());
  for (int i = 0; i < n1; i++)
  {
    int sum = (x[i]-'0')+(y[i]-'0')+carry;
    s.push_back((sum%10)+'0');
    carry = sum/10;
  }
  for (int i = n1; i < n2; i++)
  {
    int sum = (x[i]-'0')+(y[i]-'0')+carry;
    s.push_back((sum%10)+'0');
    carry = sum/10;
  }
  if(carry){
    s.push_back(carry+'0');
  }
  reverse(s.begin(), s.end());
  return s;
     
}
int main(){
  string s1, s2;
  cin>>s1>>s2;
  cout<<bigSum(s1, s2)<<endl;
}