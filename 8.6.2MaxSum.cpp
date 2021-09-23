#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    
    int maxSum=INT8_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=  j; k++){
                sum=sum+array[k];
            }//cout<<sum<<endl;
            maxSum=max(maxSum,sum);
        }
        
    }
    cout<<maxSum<<" ";
}