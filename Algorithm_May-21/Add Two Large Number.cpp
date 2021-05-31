#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<int> large_sum(vector<int>s1, vector<int>s2){
      reverse(s1.begin(), s1.end());
      reverse(s2.begin(), s2.end());
      vector<int>sum;
      int carry =0;
      int len = min(s1.size(), s2.size());
      for (int i = 0; i <len; i++)
      {
         int s = s1[i]+s2[i]+carry;
        
        sum.emplace_back(s%10);
        carry = s/10;
      }
      if(s1.size()>len){
        for (int i = len; i < s1.size(); i++)
      {
         int s = s1[i]+carry;
       
        sum.emplace_back(s%10); 
        carry = s/10;
      }
      }
      if(s2.size()>len){
        for (int i = len; i < s2.size(); i++)
      {
         int s = s2[i]+carry;
           
        sum.emplace_back(s%10);
        carry = s/10;
      }
      }
      while (carry){
         sum.emplace_back(carry%10);
         carry /=10;
      }
      reverse(sum.begin(), sum.end());
     // cout<<sum.size()<<endl;
      return sum;
}
int main(){
  string s1, s2;
  int t;
  cin>>t;
  while (t--)
  {
  cin>>s1>>s2;
  vector<int>add1, add2, ans;
  for (int i = 0; i < s1.size(); i++)
  {
    add1.emplace_back(s1[i]-'0');
  }
  
  for (int i = 0; i < s2.size(); i++)
  {
    add2.emplace_back(s2[i]-'0');
  }
    ans = large_sum(add1, add2);
   // cout<<ans.size()<<endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout<<ans[i];
  }
  cout<<endl;
}
  return 0;
}