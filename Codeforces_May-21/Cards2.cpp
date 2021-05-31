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
     ll n, a[101];
float av, sum;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    av = (sum / n) * 2;
    for (int i = 1; i <= n; i++) {
        if (a[i] != 0) {
            for (int j = 1; j <= n; j++) {
                if (a[i] + a[j] == av && i != j) {
                    cout << i << " " << j << endl;
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
    }
}
int main(){
     
       solve();  
     
     return 0;
}