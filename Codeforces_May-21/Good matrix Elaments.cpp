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
    ll n, sum =0, i, j; 
    cin>>n;
    ll arr[n][n];
    for(i =0; i<n; i++){
         for(j = 0; j<n; j++){
              cin>>arr[i][j];
         }
    }
    for(i =0; i<n; i++){
         for( j = 0; j<n; j++){
        sum+= arr[i][j];
         arr[i][j]= 0;
         }
    }
    for( i =0; i<n; i++){
         for(j = n-1; j>=0; j--){
              sum += arr[i][j];
              arr[i][j]=0;
         }
    }
    for( i =0; i<n; i++){
         sum+= arr[n/2][i];
         arr[n/2][i] =0;
    }

    for( i =0; i<n; i++){
         sum+= arr[i][n/2];
         arr[i][n/2] =0;
    }
    cout<<sum;
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}