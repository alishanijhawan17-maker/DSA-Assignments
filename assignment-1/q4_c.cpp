#include <iostream>
using namespace std;
int main(){
    int m1[2][2]={{1,2},{3,4}};
    int temp;
    int r=sizeof(m1)/sizeof(m1[0]);
    int c=sizeof(m1[0])/sizeof(m1[0][0]);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i>j){
                temp=m1[i][j];
                m1[i][j]=m1[j][i];
                m1[j][i]=temp;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<m1[i][j];
        }
    }
}
