#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
#define E end()
#define S size()
#define r(x) reverse(x.begin(), x.end())
#define s(x) sort(x.begin(), x.end())
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
          vector<ls> add, ans;
          string s;
          ls x = "OO|OX";
          ls x1 = "OO|XO"; 
          ls y ="OX|OO";
          ls y1 ="XO|OO";
          ls z ="OO|OO"; 
          ll n, num,cnt =0;
          cin>>n;
          for (int i = 0; i < n; i++)
          {
              cin>>s;
              add.pb(s);
          }
          for (int i = 0; i <add.S; i++)
          {
              if(add[i]== x|| add[i]== x1){
                  ls a = "++|OX";
                  ans.pb(a);
                  cnt=true;
                  break;
              }else if(add[i]== y || add[i]== y1){
                  ls b ="OX|++";
                  ans.pb(b);
                  cnt =true;
                  break;
              }else if(add[i]==z){
                  ls z ="++|OO";
                  ans.pb(z);
                  cnt==true;
                  break;
              }
              ans.pb(add[i]);
          }
          if(cnt){
                 yes
          for (int i = 0; i < ans.S; i++)
          {
              cout<<ans[i]<<endl;
          }
          for (int i = ans.S; i < add.S; i++)
          {
              cout<<add[i]<<endl;
          }
          
          }
         else{
             no
         }
}
int main(){
     
       solve();  
     
     return 0;
}