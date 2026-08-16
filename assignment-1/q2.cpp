#include <iostream>
using namespace std;
int main(){
    int arr[8]={10,20,30,40,20,10,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(arr[i]!=arr[j]){
                continue;
            }else{
                while(j<n-1){
                    arr[j]=arr[j+1];
                    j++;
                }
                n--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
