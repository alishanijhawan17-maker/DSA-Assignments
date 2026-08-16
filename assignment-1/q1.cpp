#include <bits/stdc++.h>
using namespace std;
#include<string>

int main(){
    char choice;
    cout<<"enter which operation you wish to perform:";
    cin>>choice;
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    switch (choice){
        case 'c':
            cout<<"enter array elements:";
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            break;
        case 'd':
            for(int i=0;i<n;i++){
                cout<<arr[i];
            }
            break;
        case 'i':
            int element;
            int index;
            cout<<"enter element to insert:";
            cin>>element;
            cout<<"enter index where to insert:";
            cin>>index;
            for(int i=n;i>index;i--){
                    arr[i]=arr[i-1];
            }
            arr[index]=element;
            n++;
            break;
        case 'e':
            int idx;
            cout<<"enter which index to delete:";
            cin>>idx;
            for(int i=idx;i<n;i++){
                arr[i]=arr[i+1];
            }
            n--;
            break;
        case 's':
            int el;
            cout<<"enter element to search:";
            cin>>el;
            for(int i=0;i<n;i++){
                if(arr[i]==el){
                    cout<<"element found at index"<<i;
                    
                }
            }
            break;
        default:
            cout<<"INVALID CHOICE";
    }
}



