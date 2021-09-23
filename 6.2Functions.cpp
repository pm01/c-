//Prime Number

// #include<iostream>
// #include<math.h>
// using namespace std;

// bool isPrime(int num){
//     for(int i=2; i<=sqrt(num); i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// void call(int num1, int num2){
//     for(int i=num1; i<num2; i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
// }

// int main(){
//     int num1,num2;
//     cout<<"Enter A range of Numbers: ";
//     cin>>num1>>num2;

//     // for(int i=num1; i<num2; i++){
//     //     if(isPrime(i)){
//     //         cout<<i<<endl;
//     //     }
//     // }

//     call(num1,num2);


// }



//FIBONACCI

// #include<iostream>
// using namespace std;

// void fibonacci(int n){
//     int t1=0;
//     int t2=0;
//     for(int i=1; i<=n; i++){
//         t1=i;
        
//         t2 = t2+t1;
//     }

//     cout<<t2;
    
// }

// int main(){
//     int n;
//     cout<<"Enter a Number: ";
//     cin>>n;

//     fibonacci(n);
// }


//FACTORIAL

#include<iostream>
using namespace std;

// int factorial(int num){
//     int fact; int t1=1; int t2=1;
//     for(int i=1; i<=num; i++){
//         fact = t1 * t2;
//         t1=fact;
//         t2++;

//     }
//     cout<<fact;
// }

int factorial(int num){
    int fact=1;
    for(int i=2; i<=num; i++){
        fact =fact*i;
    }
    cout<< fact;
    return 0;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    factorial(n);
}


