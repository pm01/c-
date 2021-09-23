// #include<iostream>
// using namespace std;

// int main(){
//     int rows,colums;
//     cout<<"Enter a Number for * rows and colums: ";
//     cin >>rows >>colums;

//     for(int i=1; i<=rows; i++){
//         for(int j =1; j<=colums; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

//Hollow Rectangle Pattern

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter number rows and colums: ";
    cin >> rows >> columns;

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows)
            {
                cout<<"*";
            }
            else if(j==1 || j==columns){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}
