#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){

    list <int> mylist;
    for(int i = 3;i<10 ;i++){
        mylist.push_back(i);
    }
    cout << mylist.front() << endl;
    cout << mylist.back() << endl;

    mylist.pop_back();

    mylist.reverse(); //precaution

    for (auto i:mylist){
        cout << i << " ";
    }
    cout << endl;

    mylist.sort();

    for (auto i:mylist){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}