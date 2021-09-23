#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int num=n;
    int add=0;
    
    while (num>0)
    {
        int lastdigit =num%10;
        add= add+ (lastdigit*lastdigit*lastdigit);
        num=num/10; 
    }
    cout<<add<<endl;

    if(n==add){
        cout<<"Number is Armstrong Number!";
    }else{
        cout<<"Number is not Armstrong Number!";
    }
    
    cout<<endl;
}