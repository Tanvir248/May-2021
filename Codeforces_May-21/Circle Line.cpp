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
      ll n, arr[101];
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>arr[i];
    ll s, t;
    cin>>s>>t;
    if(s == t)
    {
        printf("0\n");
        return;
    }
    if(s > t)
        swap(s, t);
    int sum1 = 0, sum2 = 0;
    for(int i = s; i < t; ++i)
        sum1 += arr[i];
    for(int i = t; i <= n; ++i)
        sum2 += arr[i];
    for(int i = 1; i < s; ++i)
        sum2 += arr[i];
    sum1 = min(sum1, sum2);
    cout << sum1 << endl;
    }
int main(){
     
       solve();  
     
     return 0;
} 
/*ll n, num, sum1=0, sum2 =0, sum3=0;
          vi add, ans;
          cin>>n;
          for (int i = 0; i < n; i++)
          {
               cin>>num;
               add.pb(num);
          }
          ll x, y;
          cin>>x>>y;
          ll mx = max(x, y);
          ll mn = min(x, y);
          for (int i = mn; i <=mx-1; i++)
          {
              // cout<<add[i]<<" ";
               sum1+= add[i];
          }
          
          for (int i = mx-2; i >=mn-1; i--)
          {
              //cout<<add[i]<<" ";
               sum2+= add[i];
          }
          if(n>(mx-1)){
          for (int i = mx-1; i <=n-1; i++)
          {
              // cout<<add[i]<<" ";
               ans.pb(add[i]);
          }
          }
          if((mn-1)>0){
          for (int i = mx; i <=n; i++)
          {
               
               ans.pb(add[i]);
          }
          }
          // for (int i = 0; i < ans.sz; i++)
          // {
          //      cout<<ans[i]<<" ";
          // }
          
          
         for (int i = 0; i < ans.size(); i++)
         {
              sum3+= ans[i];
         }
         cout<<min(min(sum1, sum2), sum3)<<endl;
          
     //cout<<endl;*/