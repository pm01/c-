#include<iostream>
using namespace std;

int factorial(int num){
    int fact =1;
    for(int i=2; i<=num; i++){
        fact =fact*i;
    }
    return fact;
}

// int ncr(int n, int r){
//     int ans =factorial(n)/(factorial(r)*factorial(n-r));
//     return ans;
    
    
// }
int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            // int ncr1=ncr(i,j);
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    } 
}
