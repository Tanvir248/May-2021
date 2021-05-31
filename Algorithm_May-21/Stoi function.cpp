//length without spaces
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int stoint(string s){
    int x = 0;
    stringstream s_to_i(s);
    s_to_i>>x;
    return x;
}
int main(){
  string x;
  getline(cin, x);
  int n = stoint(x);
  cout<<n<<endl;
}