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
    string s;
    cin>>s;
    
    for(int i=s.sz-1;i>=0;i--)
    {
        if(s[i]>='5'&&s[i]<='9')
        {
            cout<<"-O|";
            for(int j=1;j<=s[i]-'5';j++)
                cout<<"O";
            cout<<"-";
            for(int j=1;j<='9'-s[i];j++)
                cout<<"O";
            cout<<endl;
        }
        else
        {
            cout<<"O-|";
            for(int j=1;j<=s[i]-'0';j++)
                cout<<"O";
            cout<<"-";
            for(int j=1;j<='4'-s[i];j++)
                cout<<"O";
            cout<<endl;
        }
    }

}
int main(){
     
       solve();  
     
     return 0;
}