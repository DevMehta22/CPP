#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> mylist = {1,4,2,5,7,8,6};

    for (int x:mylist){
        cout << x << " ";
    }
    cout << endl;

    partition(mylist.begin(),mylist.end(),[](auto x){ return x%2==0;}); // complexity : O(n)

    for (int x:mylist){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}