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
#define sz size()
#define r(x) reverse(x.begin(), x.end())
#define s(x) sort(x.begin(), x.end())
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
          ll frind, finger, cnt=0;
          cin>>frind;
          for (ll i = 0; i < frind; i++)
          {
           cin>>finger; 
           cnt+=finger;
          }
          ll ans =0;
         for (int i = 1; i <= 5; i++)
         {
              if((cnt+i)% (frind+1) != 1){
                 //  cout<<cnt<<" "<<i<<endl;
                  //cout<<cnt+i<<" ";
                   ans++;
                   //cout<<"ans"<<ans<<" ";
              }
         }
         cout<<ans;

          
     cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}