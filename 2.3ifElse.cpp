#include <iostream>

using namespace std;

// #1if/else
// int main(){
//     int age;
//     cin >> age;

//     if(age >=18){
//         cout<<"You can vote.\n";
//     }
//     else{
//         cout<<"You can't vote.\n";
//     }
// }

// #2else if
int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x > y)
    {
        if (x > z)
        {
            cout << x <<" is greater"<<endl;
        }else{
            cout<< z << " is greater"<<endl;
        }
    }
    else if (y > x)
    {
        if (y > z)
        {
            cout<< y  <<" is greater"<<endl;
        }
        else{
            cout<< z <<" is greater"<<endl;
        }
    }
   
}

// #3 nested if

// int main(){
//     int x,y;
//     cin >> x >> y;

//     if(x==y){
//         cout<<"Both the number are equal";
//     }
//     else{
//         if(x>y){
//             cout<< x <<" is greater than "<<y<<endl;
//         }
//         else{
//             cout<< y <<" is greater than "<<x<<endl;
//         }
//     }
//     return 0;
// }