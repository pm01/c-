#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0; i<5; i++){
        // cout<<*ptr<<endl;
        // ptr++;
        //OR
        cout<<*(arr+i)<<endl;
    }


}