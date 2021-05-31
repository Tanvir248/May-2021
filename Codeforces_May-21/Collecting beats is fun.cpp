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
    ll k,maxi=0,b;
       cin>>k;
      ll total[10];
for(ll i=1;i<=9;i++){
    total[i]=0;
}
string a[4];
for(ll i=0;i<4;i++){
    cin>>a[i];
    for(ll j=0;j<4;j++){
        b = atoi(a[i].substr(j,1).c_str());
        total[b]++;
        if(b>maxi){
            maxi = b;
        }
    }
}
for(ll i=1;i<=maxi;i++){
    if(total[i]>(2*k)){
        no
        return;
    }
}
yes
}
int main(){
     
       solve();  
     
     return 0;
}