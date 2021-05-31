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
      ll p1, p2;
      ll n =6;
      ll cnt1=0, cntd=0, cnt2=0;
      cin>>p1>>p2;
      for (int i = 1; i <=n; i++)
      {
          if(abs(p1-i) > abs(p2-i)){
              cnt2++;
          }
          else if(abs(p1-i) < abs(p2-i)){
              cnt1++;
          }else{
              cntd++;
          }
          
      }
          cout<<cnt1<<" "<<cntd<<" "<<cnt2;
     cout<<endl;
}
int main(){
     
       solve();  
       
     return 0;
}