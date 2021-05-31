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
ll current =0;
ll arr[100001];
void solve(int x, int current2){
	
if(x==current2);
{
	// cout<<current2<<" *"<<endl;
	for(	int i	=	current2 ;	i>0	;	i--	){
		if(arr[i]){
		cout<<i<<" "	;
			arr[i]=0	;
			current =i-1;
		}
		else {
			break;
		}
		
	}

	
}
	
}


int main() {
 int n;
 cin>>n;
current=n;
 for(int i=0;i<n;i++){
 	int x;
 	cin>>x;
 	arr[x]=1;
 	solve(x,current);
   cout<<endl;
 	
 }
 
 	return 0;
}