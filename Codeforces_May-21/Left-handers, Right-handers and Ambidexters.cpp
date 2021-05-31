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
 #define No cout<<"NO"<<endl;
#define SIZE 101
void solve(){ 
    
     ll l, r, a , b, c, n;
    cin>>l>>r>>a;
    b = (l+r+a)/2;
    c = l+a;
    n = r+a;
    ll ans1 = min(c,n);
    ll ans2 = min(ans1,b);
	ll ans = 2*ans2;
    cout<<ans<<endl;

}
int main(){
     
       solve();  
     
     return 0;
}