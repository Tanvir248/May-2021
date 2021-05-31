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
#define SIZE 101
void solve(){ 
          ll i,j,n,m;

    char s[SIZE][SIZE];
    while(cin>>n>>m){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>s[i][j];
            }
        }
		// for(i=0;i<n;i++){
        //     for(j=0;j<m;j++){
        //         cout<<s[i][j]<<endl;
        //     }
        // }
        bool flag=true;
        for(i=1;i<n;i++){
            for(j=0;j<m;j++){
				//cout<<s[i][j]<<" "<<s[i-1][j]<<endl;
				//cout<<s[i-1][j]<<endl;
                if(s[i][j]==s[i-1][j]){
                    flag=false;
                    break;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=1;j<m;j++){
                if(s[i][j]!=s[i][j-1]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true)
            yes
        else
           no
		   return;
    }
    
}
int main(){
     
       solve();  
     
     return 0;
}