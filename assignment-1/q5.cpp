#include <iostream>
using namespace std;
void display_rowsum(int m1[2][3]){
    int sum;
    int temp[2];
    for(int i=0;i<2;i++){
        sum=0;
        for(int j=0;j<3;j++){
            sum+=m1[i][j];
        }
        temp[i]=sum;
    }
    for(int i=0;i<2;i++){
        cout<<temp[i]<<" ";
    }
}
void display_colsum(int m1[2][3]){
    int ans[3];
    int sum;
    for(int j=0;j<3;j++){
        sum=0;
        for(int i=0;i<2;i++){
            sum+=m1[i][j];
        }
        ans[j]=sum;   
    }
    for(int i=0;i<3;i++){
        cout<<ans[i]<<" ";

    }

}
int main(){

   
    int m1[2][3]={{1,2,3},{4,5,6}};
    display_rowsum(m1);
    cout<<endl;
    display_colsum(m1);

   
}
