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
     ll a, b, c, d;
     cin>>a>>b>>c>>d;
     ll x = max((3*a)/10 , a-(a/250)*c);
     ll y = max((3*b)/10 , b-(b/250)*d);
     if(x==y){
          cout<<"Tie";
     }else if(x>y){
          cout<<"Misha";
     }else if(y>x){
          cout<<"Vasya";
     }
     cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}