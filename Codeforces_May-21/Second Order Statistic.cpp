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
         
        int n,num,flag=false;

        cin>>n;

        vi arr;
        for(ll i=0;i<n;i++){
            cin>>num;
            arr.pb(num);
            }

        sort(arr.begin(), arr.end());

        for(ll i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                cout<<arr[i];
                flag=true;
                break;
            }
        }

        if(flag==false)
            no

}
int main(){
     
       solve();  
     
     return 0;
}