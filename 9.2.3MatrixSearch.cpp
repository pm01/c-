#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int target; cin>>target;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int r=0, c=m-1;
    bool flag=false;
    while (r<n && c>=0)
    {
        if(arr[r][c]==target){
            cout<< r+1<<" "<<c+1<<endl;
            flag= true;
        }
        if(arr[r][c]<target){
            r++;
        }else{
            c--;                
        }
    }
    if(flag){
        cout<<"Target Found!"<<endl;
    }else{
        cout<<"Target Not Found!"<<endl;
    }
    
}