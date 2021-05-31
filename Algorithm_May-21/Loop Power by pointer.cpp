#include<iostream>
#include<cmath>
using namespace std;
void looppowe(int *a){
    for (int i = 0; i < *a; i++)
    {
      //cout<<pow(i, 2)<<" ";
      //cout<<pow(i, i)<<" ";
    }
    
    }
int main(){
    int n;
    cin>>n;
 looppowe(&n);
}