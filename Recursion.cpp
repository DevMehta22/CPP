#include<iostream>
using namespace std;

int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
    
}
int main(){
    int n;
    cout << "Enter the number:"<<endl;
    cin >> n;
    cout << "The factorial of "<< n << " is: "<<factorial(n)<<endl;


    return 0;
}