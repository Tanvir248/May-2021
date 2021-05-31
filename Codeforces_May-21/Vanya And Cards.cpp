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
#define B begin()
#define E end()
#define S size()
#define e endl;
#define v vector
#define Y cout<<"YES"<<endl;
 #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
    ll n, x, num;
           cin>>n>>x;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        sum += num;
    }
    sum = abs(sum);
    ll ans = sum / x;
    if (sum % x != 0) ans++;
    cout<<ans<<endl;
}
int main(){
    
     solve();
  
     return 0;
}