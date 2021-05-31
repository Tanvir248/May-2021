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
    ll n, num, cnt=1;
    vi add, add1, ans, ans1, loop;
    cin>>n;
        for (ll i = 0; i < n; i++)
        {   loop.pb(cnt++);
            cin>>num;
            add.pb(num);
            add1.pb(num);
        }
        sort(add.B, add.E);
        for (int i = 0; i < n; i++)
        {
            cout<<add[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < add.sz; i++)
        {
            for (int j = 0; j <add.sz ; j++)
            { 
                
                if(add[i]==add1[j]){
                ans.pb(j+1);
                ans1.pb(j+1);
                break;
            }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<ans1[i]<<" ";
        }
        
        sort(ans.B, ans.E);
        ll x =0;
        for (int i = 0; i < ans.sz; i++)
        {
            if(loop[i] != ans[i]){
                x =i+1;
            }
        }
        //cout<<x<<endl;
        for (int i = 0; i < ans1.sz; i++)
        {
            if(ans1[i]==ans1[i+1]){
                ans1[i+1]=x;
            }
            cout<<ans1[i]<<" ";
        }
        
}
int main(){
     
       solve();  
     
     return 0;
}