#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int currentSum=0;
    int maxSum=INT8_MIN;

    for(int i=0; i<n; i++){
        currentSum=currentSum+array[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
}