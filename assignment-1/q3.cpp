// LEFT ROTATIION BY K SPACES
#include <iostream>
using namespace std;

int main(){
    int k=2;
    int temp[k];

    int nums[5]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<k;i++){
        temp[i]=nums[i];
    }

    for(int i=k;i<n;i++){
        nums[i-k]=nums[i];
    }

    for(int i=0;i<k;i++){
        nums[n-k+i]=temp[i];
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
