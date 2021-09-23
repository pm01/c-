// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a Number: ";//137
//     cin>>n;
//     int ans=0;
//     int x=1;

//     while (n>0)
//     {
//         int y=n%10;
//         ans =ans+(x*y);
//         x=x*2;
        
//         n=n/10;

//     }
//     cout<<ans<<endl;

    
// }


//OCTAL TO DECIMAL

// #include<iostream>
// using namespace std;

// int octalToDecimal(int n){
//     int x=1;
    
//     int ans=0;//137
//     while (n>0)
//     {
//        int y= n%10;
//         ans =ans +x*y;
//         x=x*8;
//         n=n/10;


//     }
//     return ans;
    
// }

// int main(){
//     int n;
//     cout<<"Enter Number: ";
//     cin>>n;

//     cout<<octalToDecimal(n)<<endl;
// }

//HEXADECIMAL

#include<bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string n){
    int x=1;
    int ans =0;

    int s= n.size();
    for(int i=s-1; i>=0; i--){
        if(n[i] >= '0' && n[i]<='9'){
            ans=ans+x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans= ans+x*(n[i]-'A'+10);
        }
        x=x*16;
    }
    
    return ans;

    
    
}

int main(){
    string n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    cout<<hexadecimalToDecimal(n)<<endl;
}