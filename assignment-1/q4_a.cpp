#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;   
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
