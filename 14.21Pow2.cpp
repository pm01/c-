#include<iostream>
using namespace std;

bool ispow2(int n){
    return (n&& !(n&n-1)); 

}



int main(){

cout<<ispow2(14);

    return 0;
}