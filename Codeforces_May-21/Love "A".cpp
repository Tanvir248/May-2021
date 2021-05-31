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
    
    ll n, m, t;
    ls s;

    cin >> s;

    int ac = 0;
    n = s.length();
    for(ll i = 0; i < n; i++)
    {
        if(s[i] == 'a')
            ac++;
    }

    while(true)
    {
        m = n / 2 + 1;

        if(ac >= m) break;
        n--;
    }

    cout<<n<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}