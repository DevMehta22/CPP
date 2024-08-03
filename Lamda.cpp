#include<iostream>
#include<string>

using namespace std;

int main(){

    []{cout << "Hello from Dev Mehta\n";}();
    [](){return 100;};

    auto sum = [](auto a, auto b){return a+b;};

    cout << "Sum of 2 and 5 is: " <<sum(2,5) << endl;
    return 0;
}