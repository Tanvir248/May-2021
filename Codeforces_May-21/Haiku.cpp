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
     getline(cin, s1);
     getline(cin, s2);
     getline(cin, s3);
     ll cnts1 =0, cnts2 =0, cnts3 =0;
     for (ll i = 0; i < s1.sz; i++){
          if(s1[i] =='a'||s1[i] =='e'||s1[i] =='i'||s1[i] =='o'||s1[i] =='u'){
               cnts1++;
          }
     }
     for (ll i = 0; i < s2.sz; i++){
          if(s2[i] =='a'||s2[i] =='e'||s2[i] =='i'||s2[i] =='o'||s2[i] =='u'){
               cnts2++;
          }
     }
     for (ll i = 0; i < s3.sz; i++){
          if(s3[i] =='a'||s3[i] =='e'||s3[i] =='i'||s3[i] =='o'||s3[i] =='u'){
               cnts3++;
          }
     }
     //cout<<cnts1<<" "<<cnts2<<" "<<cnts3;
    if(cnts1 == 5 && cnts2 == 7 && cnts3 == 5){
             yes
    }else{
         no
         }
    
}
int main(){
     
       solve();  
     
     return 0;
}