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
    ll n;
    cin>>n;
    ll arr[n][n];
    for(ll i =0; i<n; i++){
         for(ll  j=0; j<n; j++){
              cin>>arr[i][j];
         }
    }
    vi add, add1;
    ll sum = 0;
    for(ll i =0; i<n; i++){
         for(ll  j=0; j<n; j++){
              sum+= arr[i][j];
         }
         add.pb(sum);
        //cout<<sum<<" ";
         sum=0;
    } 
    for(ll i =0; i<n; i++){
         for(ll  j=0; j<n; j++){
              sum+= arr[j][i];
         }
         //cout<<sum<<" ";
         add1.pb(sum);
         sum=0;
    } ll ans =0;
    for(ll i = 0; i<n; i++){
         for(ll  j=0; j<n; j++){
         if(add[i]<add1[j]){
              ans++;
         }     
         }
    }
    cout<<ans;
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}