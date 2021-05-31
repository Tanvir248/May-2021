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
    string s, arr[10];
    cin >> s;
    for (ll i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < 8; ++i)
    {
        string x = s.substr(i * 10, 10);
       // cout<<x<<" ";
        for (ll j = 0; j < 10; ++j)
        {
            if (x == arr[j])
            {
                cout << j;
                break;
            }
        }
    }
    cout << endl;
}
int main(){
     
       solve();  
     
     return 0;
}