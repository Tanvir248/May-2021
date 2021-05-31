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
        ll n;
       string s;
       ll c1, c2;
       bool flag =false;
       cin>>n;
       for (int i = 0; i < n; i++)
       {
           cin>>s>>c1>>c2;
        if(c1>=2400 && c2>c1){
            flag = true;
        }
        
       }
       if(flag){
           yes
       }else
       {
           no
       }
}
int main(){
     
       solve();  
    
     return 0;
}