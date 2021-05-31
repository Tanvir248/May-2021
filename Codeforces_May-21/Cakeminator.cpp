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
         ll r, c, row[11] = {0}, col[11] ={0};
       string s;
       cin >> r >> c;
      for (int i = 0; i < r; ++i)
      {
        cin >> s;
        for (int j = 0; j < c; ++j)
        {
            if (s[j] == 'S')
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    ll cnt =0;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                cnt += 1;
            }
        }
    }
    cout << cnt;
     cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}