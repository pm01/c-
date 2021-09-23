#include<iostream>
#include<climits>
using namespace std;

int kadens(int array[], int n){
    int sum=0;
    int maxSum =INT_MIN;
    for(int i=0; i<n; i++){
        sum=sum+array[i];
        if(sum<0){
            sum=0;
        }
        maxSum= max(maxSum,sum);
        
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadens(array,n);
    int totalSum=0;
    for(int i=0; i<n; i++){
        
        totalSum=totalSum+array[i];
        array[i]=-array[i];
    }

    wrapsum= totalSum+kadens(array,n);
    cout<<max(wrapsum,nonwrapsum);
}