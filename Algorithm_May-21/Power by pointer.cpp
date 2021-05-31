#include<iostream>
#include<cmath>
using namespace std;
int powe(int *a){
  int x =pow(*a, 2);
  return x;
    }
int main(){
    int n;
    cin>>n;
 cout<<powe(&n)<<endl;
}