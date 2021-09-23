#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    //int counter=1;
    //while (counter<n)
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        //counter++;
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    
}