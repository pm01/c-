#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int current=0;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
        current=0;
        for(int j=i; j<n; j++){
            current=current+array[j];
            cout<<current<<" ";
        }
    }
}