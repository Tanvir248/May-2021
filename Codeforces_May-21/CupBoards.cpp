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
    ll left[10001],right[10001];
    for(int i=0;i<n;i++){
        cin>>left[i]>>right[i];
    }
    int r0=0,r1=0,l0=0,l1=0;
    for(int i=0;i<n;i++){
        if(right[i]==1){
            r1++;
        }else{
            r0++;
        }
    }
    int red=min(r1,r0);
    for(int i=0;i<n;i++){
        if(left[i]==1){
            l1++;
        }else{
            l0++;
        }
    }
    red+=min(l1,l0);
    cout<<red;
     cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}