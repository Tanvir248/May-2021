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
ll tube[3][3];
bool result[3][3];
void solve(){ 
       
    int i, j;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            result[i][j] = true;
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cin >> tube[i][j];
    }
    
    if(tube[0][0]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        //result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
    }
    if(tube[1][0]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[2][0] = !result[2][0];   
        result[1][1] = !result[1][1];
    }
    if(tube[2][0]%2 != 0)
    {
       
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
    }
    if(tube[0][1]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        result[0][2] = !result[0][2];
    }
    if(tube[1][1]%2 != 0)
    {
        result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
        result[1][2] = !result[1][2];
    }
    if(tube[2][1]%2 != 0)
    {
       
        result[1][1] = !result[1][1];
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[2][2] = !result[2][2];
    }
    if(tube[0][2]%2 != 0)
    {
        result[0][1] = !result[0][1];
        result[0][2] = !result[0][2];
        result[1][2] = !result[1][2];
    }
    if(tube[1][2]%2 != 0)
    {
        
        result[0][2] = !result[0][2];
        result[1][1] = !result[1][1];
        result[1][2] = !result[1][2];    
        result[2][2] = !result[2][2];
    }
    if(tube[2][2]%2 != 0)
    {
        result[2][2] = !result[2][2];
        result[2][1] = !result[2][1];
        result[1][2] = !result[1][2];
        
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(result[i][j]) 
            cout << 1;
            else 
            cout << 0;
        }
        cout<<endl;
    }        
}
int main(){
     
       solve();  
     
     return 0;
}