
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        cin>>array[i];
    }

    for (int i =1; i <= n; i++)
    {
        if (maxNo<array[i])
        {
            maxNo=array[i];
        }
        
        if(minNo>array[i]){
            minNo=array[i];
        }
    }
    
    cout<<maxNo<<endl<<minNo<<endl;

    
}