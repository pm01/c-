#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool flag=true;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[n-1-i]){
            flag=false;
            break;
        }
    }
    if(flag==true){
        
        cout<<"word is palendrom!";
    }else{
        cout<<"Word is not palendrom!";
    }

    return 0; 
}