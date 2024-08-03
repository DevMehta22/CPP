#include<iostream>

template<typename T>

T addme(T a,T b){
    return a+b;
}

int main(){
    int a=4,b=3;
    float c=7.5,d=5.6;
    std::cout << addme(c,d) << std::endl;


}