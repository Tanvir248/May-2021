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
           int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int countT = 0;
        int countM = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i]=='T'){
                countT++;
            } else{
                countM++;
            }
        }
        if (countT == 2*countM){
            int count = 0;
            bool result = false;
            for (int i = 0; i < str.length(); ++i) {
                if (str[i]=='T'){
                    count++;
                } else{
                    count--;
                    if (count<0){
                        result = true;
                        break;
                    }
                }

            }
            if (!result){
                count = 0;
                bool no = false;
                for (int i = str.length()-1; i >=0 ; i--) {
                    if (str[i]=='T'){
                        count++;
                    } else{
                        count--;
                        if (count<0){
                            cout<<"NO\n";
                            no = true;
                            break;
                        }
                    }
                }
                if (!no){
                    yes
                }
            } else{
                No
            }
        } else{
            No
        }
    }
}
int main(){
     
       solve();  
     
     return 0;
}