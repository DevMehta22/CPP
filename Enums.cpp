#include<iostream>
using namespace std;

enum msOffice{
    BOLD,
    ITALICS=10,
    UNDERLINE,
    COSSED
};

int main(){
    int attributes = COSSED;
    cout << "Attributes: " << attributes << endl;

    return 0;
}