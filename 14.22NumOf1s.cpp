#include<iostream>
using namespace std;

int numOf1s(int n){
    int count=0;
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
    
}

int main(){

    cout<<numOf1s(128);
}