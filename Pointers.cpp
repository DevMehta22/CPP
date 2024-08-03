#include<iostream>
using namespace std;

int main(){
    int score = 200;
    int *ptr = &score;
    cout << "The value of score is " << *ptr << endl;
    cout << "The address of score is " << ptr << endl;
    int &another_score = score;
    another_score = 800;
    cout << "The value of score is " << score << endl;
    cout << "The address of score is " << ptr << endl;

    
    return 0;
}
