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
          ll n, div;
          vi add1, add2;
          cin>>n;
          n*=n;
          div = n/2;
          for (int i = 1; i <= div; i++)
          {
               add1.pb(i);
          }
          for (int i = n; i > div; i--)
          {
               add2.pb(i);
          }

          for (int i = 0; i < add1.sz; i++)
          {
           cout<<add1[i]<<" "<<add2[i];
                  cout<<endl;     
                }
          
}
int main(){
     
       solve();  
     
     return 0;
}