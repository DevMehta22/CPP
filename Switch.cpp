#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your Ratings"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        cout << "Rated 1 star";
        break;
    case 2:
        cout << "Rated 2 star";
        break;
    case 3:
        cout << "Rated 3 star";
        break;
    case 4:
        cout << "Rated 4 star";
        break;
    case 5:
        cout << "Rated 5 star";
        break;
    default:
        cout << "Invalid Rating";
        break;
    }
    return 0;
}