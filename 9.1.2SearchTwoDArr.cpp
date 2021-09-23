#include<iostream>
using namespace std;

int main(){
    int n,m,s;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cin>>s;
    bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==s){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag=true){
        cout<<"Element Found"<<endl;
    }else
    {
        cout<<"Element Not Found"<<endl;
    }
    
}