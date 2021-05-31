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
// int soln(vi x, vi y, ll n){
//   ll sum=0;
//     for (int i = 0; i < n; i++)
//     {
//       //cout<<x[i]<<" ";
//      // cout<<y[i]<<" ";
//     }
    
// }
void solve(){ 
       ll n;
       cin>>n;
       ls s1, s2;
       vi add1, add2;
       cin>>s1>>s2;
       for (ll i = 0; i < n; i++)
       {
         add1.eb(s1[i]-'0');
         //add1.eb(s2[i]-'0');
       }
       for (ll i = 0; i < n; i++)
       {
         add2.eb(s2[i]-'0');
       }
  //soln(add1, add2, n);
    ll sum =0;
 for (int i = 0; i < n; i++){
  // cout<<add1[i]<<" "<<add2[i]<<" ";
      int x = abs(add1[i]- add2[i]);
     //cout<<x<<endl;
      int y = abs(((add1[i]-0)+1)+ (9-add2[i]));
      int z = abs(((add2[i]-0)+1)+(9-add1[i]));
      sum+=min(min(x, y), z);
     // cout<<sum;
 }
    cout<<sum<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}