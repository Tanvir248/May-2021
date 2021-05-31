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
     ll n, num;
     vi add;
     cin>>n;
     for (int i = 0; i < n; i++)
     { cin>>num;
          add.pb(num);
     }
     ll index  = 0;
     for (int i = 0; i < add.sz; i++)
     {
          if(add[i]== 1){
               index = i+1;
          }
     }
      //cout<<add[0];
     //cout<<index<<endl;
     ll a = abs(n - add[0]);
     ll a1 = abs(n- index);
     ll a2 =abs(1- add[0]);
     ll a3 = abs(1- index);
          
          cout<<max(max(a, a1),max(a2, a3))<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}/*vi add;
     cin>>n;
     for (int i = 1; i <=n; i++)
     {
           cin>>num;
          if(num== 1){
               a= i;
          }else if(num == n){
               b = i;
          }
     }
     
    cout << max(max(n - b, b - 1), max(n - a, a - 1));
     cout<<endl;*/