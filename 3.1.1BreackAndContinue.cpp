// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;

//     int i;
//     for(i=2; i<n; i++){
//         if(n%i==0){
//             cout<<"Number is Non Prime"<<endl;
//             break;
//         }
//     }


//     if(i==n){
//     cout<<"Prime Number"<<endl;

//     }
// }


#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter range of Numbers: ";
    cin>>a>>b;

    
    for(int i =a; i<=b; i++){
        int j;
        for( j=2;j<i; j++){
            if(i%j==0){
                break;
            }
            
        }
        
        if(j==i){
            cout<<"primeno"<<i<<endl;
        }
        
    }
}