#include <iostream>
using namespace std;
int main(){
    int integer_array[4]= {1,2,3,4};
    cout << integer_array[0] << endl;

    int another_array[4];
    another_array[0]= 5;
    cout << another_array[0] << endl;
    *another_array = 9;
    cout << another_array[0] << endl;
    cout << another_array[1] << endl;

    int *ap = another_array;
    ap++;
    *another_array = 19;
    cout << another_array[1] << endl;
    return 0;
}