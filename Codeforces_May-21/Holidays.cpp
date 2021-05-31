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
     lln n;
     cin>>n;
     ll ans = n/7;
     ll annm = n%7;
     if(annm ==6){
          cout<<1+(2*ans)<<" ";
     }else
     {
     cout<<2*ans<<" ";    
     }
     ll mars = 2*ans;
     if(annm == 0){
          cout<<mars;
     }
     else if(annm==1){
          cout<<1+mars;
     }else if(annm>1){
          cout<<2+mars;
     }
 
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}