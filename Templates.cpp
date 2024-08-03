#include <iostream>
#include <string>
using namespace std;

template <typename T>
void func(T t){
    cout << t << endl;
}

template <typename T, typename... Args>
void func(T t, Args... args){
    cout << t << endl;
    func(args...);
}



int main(){
    string name = "Dev";
    func(1,2,3,4.5678,name);
    return 0;
}