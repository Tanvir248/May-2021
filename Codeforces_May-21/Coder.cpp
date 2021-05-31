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
          ll n, cnt=0;
          cin>>n;
          ls s;
         for (int i = 1; i <= n; i++)
         {
           if(i%2!=0){
           for (int j = 1; j <= n; j++)
           {
            if(j%2!=0){
                //cout<<"C";
                s.pb('C');
            }else{
                //cout<<".";
                s.pb('.');
            }    
           }
           } if(i%2==0){
           for (int j = 1; j <= n; j++)
           {
            if(j%2==0){
                //cout<<"C";
                s.pb('C');
            }else{
                //cout<<".";
                s.pb('.');
            }    
           }
           }
          // cout<<endl;
         }
         for (int i = 0; i < s.sz; i++)
         {
             if(s[i]=='C')
             cnt++;
         }
         cout<<cnt<<endl;
    ll flag =0;
         for (int i = 0; i < s.sz; i++)
         {
             cout<<s[i];
        flag++;
             if(flag%n==0){
                 cout<<endl;
             }
         }
        // cout<<cnt<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}