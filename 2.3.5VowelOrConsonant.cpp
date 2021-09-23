// #include<iostream>

// using namespace std;

// int main(){
//     char alphabet;
    
//     cout<<"Enter alphabet: ";
//     cin >>alphabet;
    

//     if(tolower(alphabet) == 'a' ||tolower(alphabet) =='e' ||tolower(alphabet) =='i' ||tolower(alphabet) =='o' ||tolower(alphabet) =='u'){
//         cout<< "Vowel\n";
//     }else{
//         cout<<"Console\n"; 
//     }
// }






#include<iostream>
using namespace std;

int main(){
    char c;
    cout<< "Enter A Character: ";
    cin >> c;

    if(tolower(c)=='a' || tolower(c)=='e' || tolower(c)=='i' || tolower(c)=='o' || tolower(c)=='u'){
        cout <<"Character is Vowel"<<endl;
    }else{
        cout<<"Character is Console"<<endl;
    }
}
