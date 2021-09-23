#include<iostream>
using namespace std;

int frindsPairing(int n){

    if(n==0 ||n==1 ||n==2){
        return n;
    }
    
    return frindsPairing(n-1)+ frindsPairing(n-2)*(n-1);
}

int main(){

    cout<<frindsPairing(8);
}