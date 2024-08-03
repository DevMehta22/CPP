#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> num;
    vector<string> heros {"batman","superman","ironman"};

    for (int i=0;i<5;i++){
        num.push_back(i);
    }

    cout << num.size() << endl << num.capacity() << endl<< num.max_size() << endl;
    cout << num.empty() <<endl;

    return 0;
}