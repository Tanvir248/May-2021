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
#define e endl;
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
            vi add;
            ll n, num;
            cin>>n;
            ll sum =0, cnt=0, odd =0,even =0;
           for (int i = 0; i < n; i++)
           {
                cin>>num;
                add.push_back(num);
                sum+=add[i];
           }
           for (int i = 0; i < n; i++)
           {
                if(add[i]%2==0){
                     even++;
                }else
                {
                     odd++;
                }
                
           }
           if(odd%2 !=0){
                cnt =odd;
           }else
           {
                cnt = even;
           }
           
           cout<<cnt;
           
     cout<<endl;
}
int main(){
    
          
     solve();
    
     return 0;
}