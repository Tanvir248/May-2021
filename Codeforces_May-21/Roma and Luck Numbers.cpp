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
     
    int n, k, count=0;
    cin >> n >> k;

    string s;
    while (n--)
    {
        int lucky=0;
        cin >> s;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                lucky++;
            }
        }
        if (lucky <= k)
        {
            count ++;
        }
    }
    cout << count << endl;
}
int main(){
     
       solve();  
     
     return 0;
}