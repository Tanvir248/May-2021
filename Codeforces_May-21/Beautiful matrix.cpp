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
     ll arr[26][26];
     for (ll i = 0; i < 5; i++)
     {
          for (ll j = 0; j < 5; j++)
          {
               cin>>arr[i][j];
          }
          
     }
     ll indxr = 0,indxc =0 ;
     for (ll i = 0; i < 5; i++)
     {
          for (ll j = 0; j < 5; j++)
          {
               if(arr[i][j]==1){
                    indxr = j+1;
                    indxc= i+1;
               }
          }
          
     }//cout<<indxr<<" ";
      //cout<<indxc<<" ";
     ll ans = abs(3 - indxr);
    // cout<<ans;
          ll ans1 = abs(3- indxc);
    cout<<ans+ans1;
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}