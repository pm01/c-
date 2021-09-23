#include<iostream>
using namespace std;

int  factorial(int num){
    int fact=1;
    for(int i=2; i<=num; i++){
        fact=fact*i;
    }
    
    return fact;
    
}

int main(){
    int n; int r;
    cout<<"Enter N and R: ";
    cin>>n>>r;
    int nMr=n-r;
    
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans<<endl;
}