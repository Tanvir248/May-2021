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
          ll n;
          ls s;
        cin>>n;
        cin>>s;
        int a = 0,b = 0;
        for(int i = 0; i < n; i ++){
            if(s[i] == 'x') a ++;
            else b ++;
        }
        int ans = 0;
        if(a == b){
            cout<<0<<endl;
            cout<<s<<endl;
        }
        else if(a > b){
            for(int i = 0; i < n && a != b; i ++){
                if(s[i] == 'x'){
                    ans ++;
                    s[i] = 'X';
                    a --;
                    b ++;
                }
            }
            cout<<ans<<endl;
            cout<<s<<endl;
        }
        else{
            int c = b - a;
            for(int i = 0; i < n && a != b; i ++){
                if(s[i] == 'X'){
                    ans ++;
                    s[i] = 'x';
                    a ++;
                    b --;
                }
            }
            cout<<ans<<endl;
            cout<<s<<endl;
        }
}
int main(){
     
       solve();  
     
     return 0;
}
/*ll n, cnt1=0, cnt2=0;
          cin>>n;
          ls s;
          cin>>s;
          for (int i = 0; i < s.sz; i++)
          {
               if(s[i]=='X'){
                    cnt1++;
               }else{
                    cnt2++;
               }
          }
          if(cnt1==cnt2){
               cout<<0<<endl;
               cout<<s<<endl;
          }else{
               if(cnt1>cnt2){
                    ll ans = s.sz/2;
                    if(cnt2==0)
                    cout<<ans<<endl;
                    else{
                    ans = ans-cnt2;
                    cout<<ans<<endl;
                    }
               for (ll i = 0; i <s.sz; i++)
               {
                    if(i%2==0){
                         cout<<'X';
                    }else{
                         cout<<'x';
                    }
               }
               
               }else if(cnt1<cnt2){
                    ll ans = s.sz/2;
                    if(cnt1==0)
                    cout<<ans<<endl;
                    else{
                    ans = ans-cnt1;
                    cout<<ans<<endl;
                    }
               for (ll i = 0; i <s.sz; i++)
               {
                    if(i%2==0){
                         cout<<'X';
                    }else{
                         cout<<'x';
                    }
               }
               
               }
          }
          //cout<<cnt1<<" "<<cnt2;
     cout<<endl;*/