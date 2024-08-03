#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Corners{
    float a, b, c, d;
};



int main(){

    // vector<int> inty;

    // inty.push_back(2);
    // inty.push_back(3);
    // inty.push_back(4);
    // inty.push_back(5);
    // inty.push_back(6);

    // for(auto i = inty.begin();i!=inty.end();i++){
    //     cout << *i << endl;
    // }
    
    vector<Corners> corners;
    corners.push_back({1.0,2.0,3.0,4.0});
    corners.push_back({5.0,6.0,7.0,8.0});

    for(int i=0;i<corners.size(); ++i){
        cout << corners[i].a << " " << corners[i].b << " " << corners[i].c << " " << corners[i].d << endl;
    }
    return 0;
}