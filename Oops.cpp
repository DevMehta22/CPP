#include<iostream>
#include<string>
using namespace std;

class User{
// private:
    int _secret = 22;

public:
    string name = "default";
    void msg(){
        cout << "Class is great " <<name << endl;
    }

    void classMsg();

    void setSecret(const int & newSec){
        _secret = newSec;
    }

    int getSecret()const {
        return _secret;
    }
};

void User::classMsg(){
    cout << "Class is great " << name << endl;
}

int main(){

    User sam;
    sam.name = "Sam";
    sam.msg();
    sam.setSecret(33);
    cout << sam.getSecret()<< endl;
    
    User dev;
    dev.msg();
    dev.name = "dev";
    dev.msg();
    dev.classMsg();

    User rock;
    cout << rock.getSecret();

    return 0;
}