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
#define S size()
#define r(x) reverse(x.begin(), x.end())
#define s(x) sort(x.begin(), x.end())
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
          ll n1, n2, num;
          //use array not vector....
          vi add={0};
          cin>>n1>>n2;
              for(ll i=1;i<=n2;i++)
           {
               cin>>num;
          for(ll j=num;j<=n1;j++)
             {
               if(add[j] == 0)
                add[j] = num;
               }
          }    
         for(ll i=1;i<=n1;i++)
           {
               cout<<add[i]<<" ";
             }
             cout<<endl;
}
int main(){
     
       solve();  
    
     return 0;
}