// #include<iostream>
// using namespace std;

// int decimalToOctal(int n){
//     int sum=0;
//     int x=1;

//     while(n>0){
//         int y=n%8;
//         sum=sum+(x*y);
//         n=n/8;
//         x=x*10;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<decimalToOctal(n);
// }




//DECIMAL TO HEXADECIMAL

#include<iostream>
using namespace std;

string decimalToHexadecimal(int n){
    string ans="";
    int x=1;

    while (x<=n)
    {
        x*=16;
    }
    x=x/16;
    

    while (n>0)
    {
        int lastdigit=n/x;
        n=n-lastdigit*x;
        x/=16;
        
        if(lastdigit<=9)
        ans= ans+ to_string(lastdigit);
        else{
            char c ='A' + lastdigit-10;
            ans.push_back(c);
        }

    }
    return ans;

}

int main(){
    int n;
    //cout<<"Enter A Number: ";
    cin>>n;

    cout<<decimalToHexadecimal(n);
}