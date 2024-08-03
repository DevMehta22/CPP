#include<iostream>
#include<string>
using namespace std;

class One{
public:
    virtual void intro(){
        cout<<"This is class One"<<endl;
    }
};

class Two: public One{
    public:
        void intro(){
            cout<<"This is class Two"<<endl;
        }
};

class Three: public One{
    public:
        void intro(){
            cout<<"This is class Three"<<endl;
        }
};

int main(){
    One *o1;
    Two o2;
    Three o3;
    o1 = &o2;
    o1->intro(); // Outputs: This is class Two
    o1 = &o3;
    o1->intro(); // Outputs: This is class Three
    
}