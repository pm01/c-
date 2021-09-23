#include<iostream>
using namespace std;



void subarrayWGSum()
{
    int n,s;
    cin>>n>>s;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int i=0; int j=0; int en=-1; int st=0-1 ; int sum=0;
    while(j<n && sum+array[j]<=s){
        sum=sum+array[j];
        j++;
    }

    if(sum==s){
        cout<< i+1<< " "<<j<< endl;
        return ;
    }

    while (j<n)
    {
        sum =sum+ array[j];
        while (sum>s)
        {
            sum=sum-array[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
        
    }
    cout<<st <<" "<<en<<" ";
    
}

int main(){
    subarrayWGSum();
}