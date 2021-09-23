#include<iostream>
using namespace std;

class student{
    string name;

    public:
    int age;
    bool gender;

    student(string s){
        name = s;
    }

    void setName(string s){
        name =s;
    }

    student(){
        cout<<"Default constructor"<<endl;
    }

    student(string s, int a, int g){
        cout<<"Parameterised constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
};

int main(){
    student a("Urvi");
    a.getName();
}