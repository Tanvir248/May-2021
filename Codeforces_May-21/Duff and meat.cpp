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
          ll n, num1, num2;
          vi add1, add2, add3;
          cin>>n;
          for (int i = 0; i < n; i++)
          {
               cin>>num1>>num2;
               add1.pb(num1);
               add2.pb(num2);
               add3.pb(num2);
          }
          ll index =0, sum=0, mn = 0, sum1=0, flag =false;
          sort(add3.B, add3.E);
          for (int i = 0; i < add2.sz; i++)
          {
               if(add2[i]==add3[0]){
                    flag =true;
                   mn = add2[i];
                    index = i;
                    for (int i = index; i < n; i++)
                    {
                         sum+=add1[i];
                    }
                    break;
               }else{
                    sum1+=add1[i]*add2[i];
               }
          }
          if(flag){
                    cout<<sum1+sum*mn;
          }else{
             cout<<sum1;
          }
               
     
     cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}/*ll n,a,p,sum=0,price=101;
    cin>>n;
    for(ll i=0;i<n;i++){
       cin>>a>>p;
        if(p<price){
            price=p;
        }
        sum+=a*price;
    }
    cout<<sum<<endl;*/