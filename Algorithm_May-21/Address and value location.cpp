#include<iostream>
using namespace std;
int main(){
     int n =10;
     int *ptr = &n;
     cout<<"The Value of n is : "<<*ptr<<endl;
     cout<<"The address of n is : "<<ptr<<endl;
     printf("The address of n = %p\n", &n);
     cout<<"The address : ";
     printf("%u  %u\n", &n, ptr);
}