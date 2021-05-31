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
    ll n,a[101],c=0,d=30000;
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>a[i];

    for(ll i=2;i<=n;i++){
        c=max(c,a[i]-a[i-1]);
        }

    for(ll i=2;i<n;i++){
        d=min(d,max(c,a[i+1]-a[i-1]));
       }
    cout<<d;
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}