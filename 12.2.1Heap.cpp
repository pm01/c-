#include<iostream>
using namespace std;

int main(){
    
    int a=10; //Stored in Stack

    int *p =new int(); //Stored in Heap
    *p=10;
    delete(p); //deallocate memory

    p=new int[4];

    delete[]p;
    p=NULL;

    return 0;
}