#include<iostream>
using namespace std;

int main(){
    float numbers[6]={3.3,2.1,6,4.3,7.1,9};
    cout << "unsorted values: " <<endl;
    for (float n:numbers){
        cout << n << " ";
    }
    cout << endl;
    sort(numbers,numbers+6); //mostly intro sort is used

    if(binary_search(numbers,numbers+6,7.1)){
        cout << "7.1 is found in the array" << endl;
    }else{
        cout << "7.1 is not found in the array" << endl;
    };

    cout << "Sorted values: " <<endl;
    for(float n:numbers){
        cout << n << " ";
    }
    return 0;
}