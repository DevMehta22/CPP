#include<iostream>
using namespace std;

int main(){
    int *myp;
    try{
        myp = new int [100000];
        cout << "Memory space allocated\n";
    } catch(...){
        cout << "Failed to allocate memory\n";
    }

    delete [] myp;
    return 0;
}