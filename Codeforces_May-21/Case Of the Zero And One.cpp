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
#define pb push_back
#define B begin()
#define E end()
#define S size()
#define e endl;
#define v vector
#define Y cout<<"YES"<<endl;
 #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
         ll n;
         cin>>n;
         string s, s0, s1;
         cin>>s;
         for (int i = 0; i < s.S; i++)
         {
              if(s[i]=='0'){
                   s0.pb(s[i]);
              }else{
                   s1.pb(s[i]);
              }
         }
         int x =s0.S;
         int y =s1.S;
            cout<<abs(x-y)<<endl;
}
int main(){
       
     solve();
    
     return 0;
}