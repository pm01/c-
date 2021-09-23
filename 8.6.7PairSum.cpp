#include<iostream>
using namespace std;

int pairsum(int array[],int n, int k){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(array[i]+array[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    int array[]={2,4,7,11,14,16,20,21};
    int k=31;

    cout<<pairsum(array,8,k);
}