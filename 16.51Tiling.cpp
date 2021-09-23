#include<iostream>
using namespace std;

int tilingways(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tilingways(n-1)+tilingways(n-2);
}


// int friendsPairing(int n){
//     if(n==0 || n==1 || n==2){
//         return n;
//     }

//     return friendsPairing(n-1)+ friendsPairing(n-2)*(n-1);
// }


int main(){

    //cout<<tilingways(4);
    // cout<<friendsPairing(4);
}