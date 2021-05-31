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
          ll n, k, f, t, max_joy, joy;
    cin >> n >> k >> f >> t;
    if (t > k)
    {
        max_joy = f - (t - k);
    }
    else
    {
        max_joy = f;
    }
    while (--n)
    {
        cin >> f >> t;
        if (t > k)
        {
            joy = f - (t - k);
        }
        else
        {
            joy = f;
        }
        if (joy > max_joy)
        {
            max_joy = joy;
        }
    }
    cout << max_joy ;
     cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}