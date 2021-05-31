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
          ls s1, s2, s3;
          cin>>s1>>s2;
          for (int i = 0; i < s1.sz; i++)
          {
            if(s1[i] != s2[i]){
                s3.pb('1');
            }else{
                s3.pb('0');
            }  
          }
          cout<<s3;
     cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}