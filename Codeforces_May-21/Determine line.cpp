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

int main(){
    ll t, n, num;
    vi add;
    cin>>t;
    ll x = t;
    while (t--)
    {
         cin>>n;
         for(ll i =0; i<n; i++){
              cin>>num;
              add.pb(num);
         }
    }
    sort(add.B, add.E);
    ll cnt =1, flag =0;
    vi ans;
    for(ll i =0; i<add.sz; i++){
     //cout<<cnt<<" ";
         if(cnt >= x){
              ans.pb(add[i]);
         }
         if(add[i]== add[i+1]){
              cnt++;
         }else{
              cnt=1;
         }
    }
    for(ll i =0; i<ans.sz; i++){
         cout<<ans[i]<<" ";
    }
     return 0;
}