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
#define B begin()
#define E end()
#define S size()
#define e endl;
#define v vector
#define Y cout<<"YES"<<endl;
 #define N cout<<"NO"<<endl;
#define SIZE 100
void solve(){ 
         ll n,flag =0;;
         cin>>n;
         ll price, performance;
         for (int i = 0; i < n; i++)
         {
            cin>>price>>performance;
            if(price != performance){
               flag =1;
               break;
            }
         }
            if(flag){
               cout<<"Happy Alex"<<endl;
            }else{
               cout<<"Poor Alex"<<endl;
            }
}
int main(){
      
     solve();
    
     return 0;
}