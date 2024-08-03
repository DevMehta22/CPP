#include<iostream>
#include<string>
using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    Phone(); //default constructor
    Phone(const string & name, const string & os, const int & price); //parameter constructor
    Phone(const Phone &); // copy constructor
    string getName(){
        cout << "value of getname is "<<this<<endl;
        return _os;
    }
    int getprice();
    ~Phone(); //destructor

};

int Phone::getprice(){
    cout << "value of object is" << this <<endl;
    return _price;
}

Phone::Phone() : _name(),_os("Dev"),_price(){
    cout << "Default constructor called" << endl;
}

Phone::Phone(const string & name, const string & os, const int & price): _name(name),
_os(os),_price(){
    cout << "Parameter constructor called" << endl;
}

Phone::Phone(const Phone & values){
    cout << "Overwrite copy constructor"<< endl;
    _name = "New-"+values._name;
    _os = "skinned-"+values._os;
    _price = values._price;
}

Phone::~Phone(){
    cout << "Destructor called for " << _name << endl;
}

int main(){
    Phone samsungA1;
    cout << samsungA1.getName() << endl;

    Phone OnePlus("OP8","Android",799);
    cout << OnePlus.getName() << endl;

    cout << "value of the object is " << &OnePlus << endl;
    cout << OnePlus.getprice() << endl;


    Phone OnePlus8 = OnePlus;
    cout << OnePlus8.getName() << endl;
    cout << OnePlus8.getprice() << endl;

    return 0;
}
