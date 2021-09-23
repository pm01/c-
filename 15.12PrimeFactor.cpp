#include<iostream>
using namespace std;

void primeFactor(int n){
    int spf[n+1]={0};
    for(int i=2; i<=n; i++){
        spf[i]=i;
        //cout<<spf[i]<<" ";
    }
    cout<<endl;

    for(int i=2; i<=n; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=n;j=j+i){
                if(spf[j]==j){
                    spf[j]=i;
                    //cout<<spf[j]<<" "<<endl;
                }
            }
        }
    }

    while (n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    

}

int main(){
    int n;
    cin>>n;
    primeFactor(n);
}