#include <iostream>
using namespace std;
int main(){
    int m1[2][2]={{1,2},{3,4}};
    int m2[2][2]={{1,2},{3,4}};
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                res[i][j]=res[i][j]+ m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<< res[i][j]<<" ";
        }
        cout<<" ";
    }  
}
