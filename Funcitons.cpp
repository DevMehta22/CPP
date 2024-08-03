#include<iostream>
using namespace std;

void swap( int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;

}
int main(){
    int *a,*b;
    cout << "Enter a:"<<endl;
    cin >> *a;
    cout << "Enter b:"<<endl;
    cin >> *b;

    cout << "Initial numbers are: a="<<*a<<"and b="<<*b<<endl;
    swap(a,b);
    cout << "Initial numbers are: a="<<*a<<"and b="<<*b<<endl;

    // pointer to swap function
    void (*pointstoswap)(int *a,int *b) = swap;
    pointstoswap(a,b);
    cout << "After swapping numbers are: a="<<*a<<"and b="<<*b<<endl;
    return 0;
}

