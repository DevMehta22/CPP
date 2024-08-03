// Inheritence in detail

#include<iostream>
#include<string>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}

    friend class Superman;

protected:
    Man(const string &name,const int & age)
    :_name(name),_age(age){}
    void run(){
        cout<<"Man can run"<<endl;
    }

public:
    void sayName() const;
};

void Man::sayName() const {
    cout<<"My name is "<<_name <<" and age is "<<_age<<endl;
};

//superman

class Superman : public Man{
    bool flight;
public:
    Superman(string name) : Man(name,26){}
    void run(){
        cout<<"Superman can run at light speed at age of "<<_age<<endl;
    }
    
};

//spiderman

class Spiderman : public Man{
    bool web;
public:
    Spiderman(string name) : Man(name,19){}
    void run(){
        cout<<"Spiderman can run at super speed"<<endl;
        }
};

int main(){
    Superman superman("Clark");
    Spiderman spiderman("Peter");
    superman.sayName();
    superman.run();
    spiderman.sayName();
    spiderman.run();
    
    return 0;
}
