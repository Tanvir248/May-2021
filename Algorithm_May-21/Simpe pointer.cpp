#include<iostream>
using namespace std;
int main(){
    int a =10;
    int b = 11;
    int c = 12;
    int *ptr = &a;
    int *ptb = &b;
    int *ptc = &c;
    cout<< *ptr<<endl;
    printf("This Pointer a address is: %p\n",ptr );
     printf("This Pointer b address is: %p\n",ptb );
      printf("This Pointer c address is: %p\n",ptc );
    //printf("This Pointer is: %d\n",*ptr );
    printf("This Pointer a Value is: %d\n",*ptr );
     printf("This Pointer b Value is: %d\n",*ptb );
      printf("This Pointer c Value is: %d",*ptc );

}