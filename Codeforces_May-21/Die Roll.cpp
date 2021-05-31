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
 #define No cout<<"NO"<<endl;
#define SIZE 101
void solve(){ 
    
    ll a,b,c;
    cin>>a>>b;
    c=max(a,b);
    c=(6-c)+1;
    if(c%2==1)
    {
        if(c==3)
            cout<<"1/2"<<endl;
        else
            printf("%d/6\n",c);
    }
    else
    {
        if(c==4)
            cout<<"2/3"<<endl;
        else
            printf("1/%d\n",6/c);
    }

}
int main(){
     
       solve();  
     
     return 0;
}