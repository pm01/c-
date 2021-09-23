// #include <iostream>

// using namespace std;

// #1 for loop
// int main(){
//     for(int i=1;i<5;i++){
//         cout<<i<<" ";
//     }

//     return 0;
// }

// #2 while loop


//practice

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<< "Enter Number for sum: ";
//     cin>>n;

//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum =sum+i;
//     }
//     cout <<sum;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    for(int i=1; i<=10; i++){
        cout<< n << " * "<< i<<" = "<< n*i<<endl;
    }
}