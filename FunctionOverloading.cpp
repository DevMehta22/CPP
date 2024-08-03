#include<iostream>

void printval(int a){
    std::cout << a << std::endl;
}

void printval(double a){
    std::cout << a << std::endl;
}

void printval(int * a){
    std::cout << a << std::endl;
}

int main(){
    printval(nullptr);
    return 0;
}