#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main(){
    int num1,num2;
    cout<<"Enter 2 Numbers: ";
    cin>>num1>>num2;

    cout<<add(num1,num2)<<endl;

    


}