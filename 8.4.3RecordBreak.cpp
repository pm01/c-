#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //int max=0;
    
    int array[n+1];
    array[n]=-1;

    for(int i=0; i<n; i++){
        cin>>array[i];
    }


    if(n==1){
        cout<<"1"<<endl;
    }

    int mx=-1;
    int ans=0;
    for(int i=0; i<n; i++){
        if(array[i]>mx && array[i+1]<array[i]){
            ans++;
        }
        mx=max(mx,array[i]);
    }
    cout<<ans<<endl;
}