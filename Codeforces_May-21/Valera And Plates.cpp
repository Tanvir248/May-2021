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
       ll n, m, k, t, cnt =0;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1){
            if (m > 0)
                m--;
            else
                cnt++;}
        else{
            if (k > 0)
                k--;
            else if (m > 0)
                m--;
            else
                cnt++;
                }
    }

    cout << cnt << endl;
}
int main(){
     
       solve();  
     
     return 0;
}/*ll a, b, p;
     ll arr[1001];
     cin>>a>>b>>p;
     for (ll i = 0; i < a; i++)
     {
          cin>>arr[i];
     }
     ll cnt1 =0, cnt2 =0;
     for (ll  i = 0; i < a; i++)
     {
          if(arr[i]== 1){
               cnt1++;
          }else{
               cnt2++;
          }
     }
     ll x = cnt1- b;
     if(x<0)
        x =0;
     ll y =cnt2- p;
     if(y<0)
     y =0;
     if(cnt1==0 && cnt2>=0){
     ll ans = cnt2-(b+p);
     cout<<ans;}
     else{
          cout<<x+y;
     }
     
    cout<<endl;*/