#include <iostream>
using namespace std;
int main(){
    int k=2;
    int temp[k];
    int nums[5]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);
    for(int i=k+1;i<n;i++){
        temp[i-k-1]=nums[i];
    }
    for(int i=n-k-1;i>=0;i--){
        nums[i+k]=nums[i];
    }
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
   
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
   
}
