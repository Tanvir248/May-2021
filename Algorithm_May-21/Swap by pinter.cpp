#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp =*a;
    *a = *b;
    *b = temp;
}
int main(){
     int arr[] = {10, 20, 43 ,40, 50, 200, 100};
    cout<<"Main Array :";
     for (int i = 0; i < 7; i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     cout<<"After Swap by function: ";
     for (int i = 0; i < 7; i++)
     {
         if(arr[i]>arr[i+1]){
             swap(arr[i], arr[i+1]);
         }
         cout<<arr[i]<<" ";
     }
     
}