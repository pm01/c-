// #include<iostream>

// using namespace std;

// int main(){
//     int sideA,sideB, sideC;
//     cout<< "Enter Sides of triangle A B C: ";
//     cin >> sideA>>sideB>>sideC;

//     if(sideA == sideB && sideB ==sideC){
//         cout << "Equilateral Triangle"<<endl;
//     }
//     else if(sideA ==sideB || sideB==sideC || sideC==sideA){
//         cout<<"Isosceles Triangle"<<endl;
//     }
//     else{
//         cout<<"Scalene Triangle"<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter three sides of Triangle: ";
    cin >> x >> y >> z;

    if (x == y && x == z)
    {
        cout << "The Triangle is equilateral" << endl;
    }
    else if (x != y && y != z)
    {
        cout << "The Triangle is scalene" << endl;
    }
    else if
        ((x == y) || (x == z)|| (y == z) )
        {
            cout << "The Triangle is isosceles" << endl;
        }
}