// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Number: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n+1-i; j++){
//             cout<<j<<" ";
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

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if((i+j)%2==0){
//             cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
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

//     for(int i=1; i<=n; i++){
//         for(int j=n; j>=i+1; j--){
//             cout<<" ";
//         }

//         for(int j=1; j<=n; j++){
//             cout<<"* ";
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
//     int count=1;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             count=j;
//             cout<<count<<" ";

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

//     for(int i=1; i<=n; i++){
//         int j;
//         for(j=1; j<=n-i; j++){
//             cout<<"  ";
//         }

//         int k=i;
//         for(; j<=n;j++){
//             cout<<k--<<" ";

//         }
//         k=2;
//         for(;j<=n+i-1;j++){
//             cout<<k++<<" ";
//         }

//     cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j=1; j<=(2*n)-(2*i)+1;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}