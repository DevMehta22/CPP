#include<iostream>
#include<string>

using namespace std;

class MyFloat{
    float ft;
public:
    MyFloat(){
        ft=0.1;
    }
    void getValue(){
        cout<<"Value of float is "<<ft<<endl;
    }
    void operator ()(float v){
        ft+=v;
    }
};

int main(){
    MyFloat mf;
    mf.getValue();
    mf(10.5);
    mf.getValue();

    return 0;
}