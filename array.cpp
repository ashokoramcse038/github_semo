#include<iostream>
using namespace std;
int fun(int arr[],int n){
      int lar_arr=0;
      for(int i=1;i<n; i++){
            if(arr[i]>lar_arr){
                  lar_arr=arr[i];
            }
      }
      return lar_arr;
}
int main(){
      int n;
      cout<<"Enter the array size:";
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
            cin>>arr[i];
      }
      int lr=fun(arr,n);
      cout<<"The largest array element is: "<<lr;
}