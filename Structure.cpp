#include<iostream>
using namespace std;

struct User{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main(){
    User usr1 = {001,"Dev","mehtadev92@gmail.com",2};
    User usr2 = {002,"Harsh","harsh12@gmail.com",5};

    User *ptr = &usr2;

    cout << usr1.email << endl;
    cout << usr2.name << endl;
    usr2.course_count = 4;
    cout << usr2.course_count << endl;

    ptr->name = "harsh";
    cout << ptr->name << endl;
    return 0;
}