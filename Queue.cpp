#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){

    queue<int> myq;
    myq.push(1);
    myq.push(2);
    myq.push(3);
    myq.push(4);

    cout << myq.front() <<endl;
    cout << myq.back() <<endl;
    myq.pop();
    cout << myq.front() <<endl;
    while(!myq.empty()){
        cout << " " << myq.front() <<endl;
        myq.pop();
    }

    priority_queue<int> mypq;
    mypq.push(1);
    mypq.push(10);
    mypq.push(5);
    mypq.push(7);

    while(!mypq.empty()){
        cout << " " << mypq.top() <<endl;
        mypq.pop();
    }
    return 0;
}