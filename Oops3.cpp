// this keyword in detail

#include<iostream>
#include<string>
using namespace std;

class Rectangle{
    double _length;
    double _width;

public:
    Rectangle(double l = 2.0, double b = 2.0){
        _length = l;
        _width = b;
    }

    double Area(){
        return _length * _width;
    }

    int compare(Rectangle rectangle){
        return this->Area() > rectangle.Area();
    }
};

int main(){
    Rectangle r1(5.0, 5.0);
    Rectangle r2(13.0, 3.0);

    cout << r1.compare(r2) <<endl;

    if(r1.compare(r2)){
        cout << "r1 is larger than r2" << endl;
    }else{
        cout << "r2 is larger than r1" << endl;
    }

    return 0;
}