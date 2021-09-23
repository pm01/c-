#include<iostream>
using namespace std;

int febo(int n){
    if(n==0|| n==1){
        return n;
    }
    // int feb=febo(n-1)+febo(n-2);
    // return feb;

    return febo(n-1)+febo(n-2);
}

int main(){
    int n;
    cin>> n;

    cout<<febo(n);
}