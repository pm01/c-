#include<iostream>
using namespace std;

// int main(){
//     char c;
//     cout<<"Enter a Character: ";
//     cin>>c;
    
//     if(tolower(c)=='a'){
//         cout<<"Hello";
//     }
//     else if (tolower(c)=='b'){
//         cout<<"Namaste";
//     }
//     else if(tolower(c)=='c'){
//         cout<<"Bonjour";
//     }
//     else if(tolower(c)=='d'){
//         cout<<"Kalimera";
//     }else{
//         cout<<"Still Learning!";
//     }
//     cout<<endl;
// }

// int main(){
//     char c;
//     cout<<"Enter a Character: ";
//     cin>> c;

//     switch (c)
//     {
//     case 'a':
//         cout<<"Hello";
//         break;
    
//     case 'b':
//         cout<<"Namaste";
//         break;

//         case 'c':
//         cout<<"Bonjour";
//         break;

//         case 'd':
//         cout<<"Kalimera";
//         break;

//         case 'e':
//         cout<<"Hola";
//         break;
//     default:
//         cout<< "Still Learning";
//         break;
//     }
//     cout<<endl;
// }


int main(){
     int a,b;
     cout<<"Enter 2 Numbers: ";
     cin>>a>>b;

     char op;
     cout<<"Enter an operator: ";
     cin>> op;

     switch (op)
     {
     case '+':
         cout<<"Addition = "<< a+b;
         break;
     
     case '-':
         cout<<"Subtraction = "<< a-b;
         break;

         case '*':
         cout<<"Multiplication = "<< a*b;
         break;

         case '/':
         cout<<"Division = "<< a/b;
         break;


     default:
        cout<<"Enter Valid input!";
         break;
     }
     cout<<endl;

}