// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Number of rows and colums: ";
//     cin>>n;

//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter N: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Number: ";
//     cin>>n;
// int counter =1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<counter<<" ";
//             counter++;
//         }
        
        
//         cout<<endl;
//     }
    

// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        

        int spaces= 2*n -2*i;
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        

        int spaces= 2*n -2*i;
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

}