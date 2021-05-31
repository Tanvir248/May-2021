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
          cin>>n;
          ll arr[101][101];
          vi add1;
          for (int i = 0; i < n; i++)
          {
               for (ll j = 0; j < n; j++)
               {
                    cin>>arr[i][j];
               }
               
          }
          ll cnt =0;
          for (int i = 0; i < n; i++)
          {
               ll c=0;
            for(ll j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                if(arr[i][j]==0||arr[i][j]==2)
                {
                    c++;
                }
            }
            if(c==n-1)
            {
                cnt++;
                add1.push_back(i+1);
            }
               
          }
          cout<<cnt<<endl;
          
          if(cnt>0){
          for (ll i = 0; i < add1.sz; i++){
               cout<<add1[i]<<" ";
          }
          cout<<endl;
          }
}
int main(){
     
       solve();  
     
     return 0;
}