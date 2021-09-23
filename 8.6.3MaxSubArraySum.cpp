#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int currsum[n+1];
    currsum[0]=0;

    for(int i=1; i<=n; i++){
        currsum[i]=currsum[i-1]+array[i-1];
        //cout<<array[i-1]<<endl;
    }

    int maxSum=INT8_MIN;
    for(int i=1; i<=n; i++){
        int sum=0;
        maxSum=max(maxSum,currsum[i]);
        for(int j=1;j<=i;j++){
            sum=currsum[i]-currsum[j-1];
            maxSum=max(maxSum,sum);
        }
    }

    cout<<maxSum<<endl;

}