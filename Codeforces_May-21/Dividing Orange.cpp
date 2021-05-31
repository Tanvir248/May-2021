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
    ll n, k, a[30];
    bool b[901] = {false};
    cin >> n >> k;
    for (ll i = 0; i < k; ++i)
    {
        cin >> a[i];
        b[a[i]] = true;
    }
    int d = 0;
    for (ll i = 0; i < k; ++i)
    {
        cout << a[i];
        for (ll j = 1; j < n; ++j)
        {
            ++d;
            while (b[d])
            {
                ++d;
            }
            cout << " " << d;
        }
        cout << endl;
    }
} 
int main(){
    
     solve(); 
  
     return 0;
}