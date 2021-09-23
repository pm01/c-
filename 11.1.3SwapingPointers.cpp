#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<a<<" "<<b<<endl;
}

int main(){
    int a=2;
    int b=3;

    // int *aptr=&a;
    // int *bptr=&b;

    swap(&a,&b);
    cout<<a<<" "<<b;
}