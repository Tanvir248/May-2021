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
          ll n;
    char s[100];
    cin>>n;
    cin>>s;
    ll i,j,cnt,sum1=0,sum2=0;
    for(i=0;i<n;i++){
        if(s[i]!='4'&&s[i]!='7'){
            cout<<"NO"<<endl;
            return;
        }
        else{
            if(i<n/2)
                sum1+=s[i]-'0';
            else
                sum2+=s[i]-'0';
        }
    }
    if(sum1==sum2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    
     solve();
  
     return 0;
}